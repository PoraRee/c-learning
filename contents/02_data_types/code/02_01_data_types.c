#include<stdio.h>
int main() {
    printf("Basic Data Types in C\n");

    // Integer data type
    int my_int = 10;
    printf("my integer value is %d\n\n", my_int);

    // Floating-point data type
    float my_float = 3.141592; // 6 decimal places by default
    printf("my float value is %f\n", my_float);

    // display with 3 decimal places
    printf("my float value with 3 decimal places is %.3f\n", my_float);

    // what if we set value more than 6 decimal places??
    my_float = 3.14159265358979323846; // set value to 20 decimal places
    printf("my float value after setting more decimal places is %f\n\n", my_float); // will print 3.141593 because float can only hold 6 decimal places (round)


    // Double data type
    double my_double = 3.141592653589793;
    printf("my double value is %lf\n", my_double); // will print 3.141593 because use %lf have 6 decimal places by default

    // display with 15 decimal places
    printf("my double value with 15 decimal places is %.15lf\n\n", my_double); // will print 3.141592653589793 because double can hold 15 decimal places

    // Character data type
    char my_char = 'A'; 
    printf("my character value is %c\n\n", my_char);

    // Boolean data type
    _Bool my_bool = 1; // 1 for true, 0 for false
    printf("my boolean value is %d\n\n", my_bool);

    // void data type, this example shows how to use void data type to declare a function that does not return anything
    void my_void(); // void data type is used to indicate that a function does not return anything

    my_void(); // you can call the function my_void() here to see what it does

    return 0;
}

// This is the definition of the function my_void() that was declared above. It does not return anything, hence the return type is void.
// NOTE: 
//  - keep in mind that void functions doesn't return any value,
//    but still can display to stdout using printf() function, as shown below.
//  - display to stdout (printf) != return value (return)
void my_void() {
    printf("This is a void function\n");
}