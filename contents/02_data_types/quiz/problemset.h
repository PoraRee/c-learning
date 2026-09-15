#ifndef PROBLEMSET_H
#define PROBLEMSET_H

#include"../../../data/quiz.h"
#include"../../../data/color.h"
#include<stdio.h>

Quiz quizzes[] = {
    {
        "Fill in the blank to code can run properly in C:\n\n"
        "```main.c\n"
        "#include<stdio.h>\n"
        "int main(){\n"
        COLOR_YELLOW "    [######]" COLOR_RESET " my_value = 5;\n"
        "    my_value = my_value + 10;\n"
        "    printf(\"%d\", my_value);\n\n"
        "    return 0;\n"
        "}"
        "\n```\n",
        {
            "void",
            "number", 
            "char"
        },
        "int"
    },
    {
        "What happens if you try to assign a floating-point value to an integer variable in C?\n",
        {
            "The program will throw a compilation error.",
            "The value will be rounded to the nearest integer.",
            "The value will be randomly changed to a different integer."
        },
        "The value will be truncated (decimal part removed)."
    },
    {
        "What is the difference between float and double data types in C?\n",
        {
            "float has a larger range and precision than double.",
            "float and double have the same range and precision.",
            "double is used for storing 2 decimal numbers, while float is used for storing 1 decimal number."
        },
        "double has a larger range and precision than float."
    },
    {
        "What is the purpose of the char data type in C?\n",
        {
            "To store integer values.",
            "To store floating-point values.",
            "To store boolean values (true/false)."
        },
        "To store single characters."
    },
    {
        "What is this code display to stdout?\n\n"
        "```main.c\n"
        "#include<stdio.h>\n"
        "int main() {\n"
        "    int my_number = 4.8;\n"
        "    printf(\"%d\", my_number);\n"
        "    return 0;\n"
        "}\n"
        "```\n\n",
        {
            "4.8",
            "random number",
            "5"
        },
        "4"
    },
    {
        "What is the right way to declare a function that does not return a value in C?\n",
        {
            "\n```main.c\n"
            COLOR_RED "def" COLOR_YELLOW " my_function() {\n"
            "    // function body\n"
            "}\n"
            "```",
            "\n```main.c\n"
            COLOR_RED "int" COLOR_YELLOW " my_function() {\n"
            "    // function body\n"
            "}\n"
            "```",
             "\n```main.c\n"
            COLOR_RED "function" COLOR_YELLOW " my_function() {\n"
            "    // function body\n"
            "}\n"
            "```",
        },
        "\n```main.c\n"
        COLOR_RED "void" COLOR_YELLOW " my_function() {\n"
        "    // function body\n"
        "}\n"
        "```",
    },
    {
        "What happens if you try to display a floating-point value using the %d format specifier in printf()?\n",
        {
            "The program will throw a compilation error.",
            "The value will be displayed correctly as a floating-point number.",
            "The value will be truncated (decimal part removed).",
        },
        "The value will be displayed as a random integer."
    },
    {
        "What happens if you try to display a character value using the %d format specifier in printf()?\n",
        {
            "The program will throw a compilation error.",
            "The character will be displayed as a random integer.",
            "The character will be displayed as a floating-point number."
        },
        "The character will be displayed as its ASCII integer value."
    },
    {
        "How C handle strings in variables?\n",
        {
            "C has a built-in string data type.",
            "C does not support strings at all.",
            "C has std::string class to declare string data type"
        },
        "C strings are represented as arrays of characters."
    },
    {
        "What is this code display to stdout?\n\n"
        "```main.c\n"
        "#include<stdio.h>\n"
        "int main() {\n"
        "    char my_char = 'A';\n"
        "    my_char = my_char + 1;"
        "    printf(\"%c\", my_char);\n"
        "    return 0;\n"
        "}\n"
        "```\n\n",
        {
            "A",
            "65",
            "random character"
        },
        "B"
    },
    // {
    //     "What is the purpose of the return statement in a C function?\n",
    //     {
    //         "To terminate the program immediately.",
    //         "To declare a new variable.",
    //         "To define the data type of the function."
    //     },
    //     "To exit the function and optionally return a value to the caller."
    // },
};

size_t quiz_size = sizeof(quizzes) / sizeof(quizzes[0]);

#endif