#ifndef QUIZ_H
#define QUIZ_H

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include"../utils/screen_utils.h"
#include"color.h"

const size_t MIN_CHOICE = 0;
const size_t MAX_CHOICE = 3;


struct Quiz {
    char *question;
    char *false_answer[3];
    char *answer;
};

typedef struct Quiz Quiz;

void quizzes_loop(Quiz *quizzes, size_t size){
    srand(time(NULL));

    int score = 0; // Initialize score to track correct answers
    for (size_t i = 0; i < size; i++){
        clear_screen();
        size_t correct_answer_index = (rand() % (MAX_CHOICE - MIN_CHOICE + 1)) + MIN_CHOICE;

        size_t permutation[3] = {0, 1, 2};
        // Simple Fisher-Yates shuffle
        for (size_t j = 2; j > 0; j--) {
            size_t k = rand() % (j + 1);
            size_t temp = permutation[j];
            permutation[j] = permutation[k];
            permutation[k] = temp;
        }

        printf("Question %d: %s\n", i + 1, quizzes[i].question);
        size_t false_answer_index = 0;
        printf("%s", COLOR_YELLOW);
        for (size_t j = MIN_CHOICE; j <= MAX_CHOICE; j++) {
            if (j == correct_answer_index) {
                printf("%c) %s\n", 'A' + j, quizzes[i].answer);
            } else {
                printf("%c) %s\n", 'A' + j, quizzes[i].false_answer[permutation[false_answer_index]]);
                false_answer_index++;
            }
        }
        printf("%s", COLOR_RESET);


        char user_answer;
        do {
            printf("Enter your answer (A, B, C, D): ");
            scanf(" %c", &user_answer);
            // Convert user input to uppercase for comparison
            if (user_answer >= 'a' && user_answer <= 'z') {
                user_answer -= 32; // Convert to uppercase
            }
        } while (user_answer < 'A' || user_answer > 'D');

        // Convert user input to uppercase for comparison
        if (user_answer >= 'a' && user_answer <= 'z') {
            user_answer -= 32; // Convert to uppercase
        }


        // Check if the user's answer is correct
        if (user_answer == (char)('A' + correct_answer_index)) {
            printf("%sCorrect!%s\n", COLOR_GREEN, COLOR_RESET);
            score++;
        } else {
            printf("%sIncorrect!%s The correct answer was: %s%c) %s%s\n", COLOR_RED, COLOR_RESET, COLOR_YELLOW, 'A' + correct_answer_index, quizzes[i].answer, COLOR_RESET);
        }

        printf("Press Enter to continue to the next question...\n");
        getchar(); // Consume the newline character left in the input buffer
        getchar(); // Wait for the user to press Enter
    }

    clear_screen();
    printf("Quiz completed! Your score: %d/%d\n", score, size);
}

#endif