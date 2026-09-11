#ifndef SCREEN_UTILS_H
#define SCREEN_UTILS_H

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

const size_t SCREEN_WIDTH = 80;  // Width of the console screen
const size_t SCREEN_HEIGHT = 20; // Height of the console screen

void clear_screen() {
    /*
    Clears the console screen. Works on Windows, Linux, macOS, and Unix systems.
    */
   
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");   // Windows
    #else
        system("clear"); // Linux, macOS, Unix
    #endif
}

void print_box(const char *placeholder) {
    /*
    Prints a simple box with a placeholder text inside.
    */
    for(size_t i = 0; i < SCREEN_HEIGHT; ++i) {
        for(size_t j = 0; j < SCREEN_WIDTH; ++j) {
                if(i == 0 || i == SCREEN_HEIGHT - 1) {
                    printf("#"); // Top and bottom borders
                } else if(j == 0 || j == SCREEN_WIDTH - 1) {
                    printf("#"); // Left and right borders
                } else if(i == SCREEN_HEIGHT / 2 && j >= (SCREEN_WIDTH - strlen(placeholder)) / 2 && j < (SCREEN_WIDTH + strlen(placeholder)) / 2) {
                    printf("%c", placeholder[j - (SCREEN_WIDTH - strlen(placeholder)) / 2]); // Placeholder text
                } else {
                printf(" "); // Inside the box
            }
        }
        printf("\n");
    }
   
}

#endif