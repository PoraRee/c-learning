#ifndef PROBLEMSET_H
#define PROBLEMSET_H

#include"../../../data/quiz.h"
#include"../../../data/color.h"
#include<stdio.h>

Quiz quizzes[] = {
    {
        "Which function is commonly used in C to read formatted input from the user?\n",
        {
            "readLn()",
            "printf()",
            "input()",
        },
        "scanf()",
    },
    {
        "What does the & operator do in "COLOR_YELLOW "scanf(\"%d\", &age)" COLOR_RESET " when age is an int variable?\n",
        {
            "Convert age to a string",
            "Prints the value of age",
            "Create a copy of age"
        },
        "Provide the address of age",
    },
    {
        "Which format specifier should normally be used with scanf() to read an " COLOR_YELLOW "int" COLOR_RESET " variable?\n",
        {
            "%s",
            "%c",
            "%f",
        },
        "%d",
    },
    {
        "What is the main characteristic of pass-by-value in C?\n",
        {
            "The function cannot have parameters",
            "The variable's address is passed",
            "The original variable is automatically renamed"
        },
        "A copy of the argumnet is passed",
    },
    {
        "In C, what technique is commonly used to let a function modify an original int variable?\n",
        {
            "Use printf() inside the function",
            "Use a character constant",
            "Pass the int as a normal value"
        },
        "Pass its address using a pointer"
    },
    {
        "What does this code display to stdout??\n\n"
        "```main.c\n"
        "#include<stdio.h>\n"
        "int main() {\n"
        "    void change(int n);\n"
        "    int x = 10;\n"
        "    change(x);\n"
        "    printf(\"%d\", x);\n"
        "    return 0;\n"
        "}\n\n"
        "void change(int n) {\n"
        "    n = 20;\n"
        "}\n"
        "```\n\n",
        {
            "20",
            "compilation error",
            "x"
        },
        "10",
    },
    {
        "Which function correctly uses a pointer parameter to change the caller's int variable to 50?\n",
        {
            "\nvoid set(int *p) {\n"
            "    p = 50;\n"
            "}\n",
            "\nvoid set(int p) {\n"
            "    p = 50;\n"
            "}\n",
            "\nvoid set(int p) {\n"
            "    &p = 50;\n"
            "}\n",
        },
        "\nvoid set(int *p) {\n"
        "    *p = 50;\n"
        "}\n",
    },
    {
        "Which call correctly passes the address of an int variable named num to " COLOR_YELLOW "void change(int *p)" COLOR_RESET "?\n",
        {
            "change(num)",
            "change(\%num)",
            "change(*num)",
        },
        "change(&num);",
    },
    {
        "Which statement best describes pass-by-reference behavior commonly discussed in C?\n",
        {
            "C automatically passes every argument by reference",
            "A function receives no arguments at all",
            "The compiler duplicates the entire program",
        },
        "A pointer is passed so the function can access the original object"
    },
    {
        "What is the correct " COLOR_YELLOW "scanf()" COLOR_RESET " statement to read a " COLOR_YELLOW "float" COLOR_RESET " variable named price?\n",
        {
            "scanf(\"\%c\", &price)",
            "scanf(\"\%d\", &price)",
            "scanf(\"\%f\", price)",
        },
        "scanf(\"\%f\", &price)",
        
    }
};

size_t quiz_size = sizeof(quizzes) / sizeof(quizzes[0]);

#endif