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
    },
    {
        "Fill in the blank to code can run properly in C:\n\n```main.c\n#include<stdio.h>\nint main() {\n    " COLOR_YELLOW "[#######]" COLOR_RESET "(\"Hello, World!\\n\");\n    return 0;\n}\n```\n",
        {"print", "echo", "console.log"},
        "printf"
    },
    {
        "Fill in the blank to code can run properly in C:\n\n```main.c\n#include<stdio.h>\nint main() {\n    printf(\"Hello, World!\\n\");\n    " COLOR_YELLOW "[#######]" COLOR_RESET "\n}\n```\n",
        {"exit(0);", "return 1;", "end;"},
        "return 0;"
    },
    {
        "What printf() function does in C?\n",
        {"It reads input from the user.", "It allocates memory for variables.", "It terminates the program."},
        "It prints the output to the console."
    },
    {
        "Why main function is important in C?\n",
        {"It is used to declare variables.", "It is used to include libraries.", "It is used to define data types."},
        "It is the entry point of the program where execution starts."
    }
};

size_t quiz_size = sizeof(quizzes) / sizeof(quizzes[0]);

#endif