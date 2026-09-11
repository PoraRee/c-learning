#ifndef PROBLEMSET_H
#define PROBLEMSET_H

#include"../../../data/quiz.h"
#include"../../../data/color.h"
#include<stdio.h>

Quiz quizzes[] = {
    {
        "Fill in the blank to code can run properly in C:\n\n```main.c\n" COLOR_YELLOW "[#########]" COLOR_RESET "\nint main() {\n    printf(\"Hello, World!\\n\");\n    return 0;\n}\n```\n",
        {"import stdio.h", "from stdio import printf", "void printf(char *str);"},
        "include<stdio.h>"
    }
};

size_t quiz_size = sizeof(quizzes) / sizeof(quizzes[0]); // Calculate the number of quizzes

#endif