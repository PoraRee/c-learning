#include<stdio.h>
int main() {
    printf("Data Types in C\n");

    // Integer data type
    int my_int = 10;
    printf("my integer value is %d\n\n", my_int);

    // Floating-point data type
    float my_float = 3.141592; // 6 decimal places by default
    printf("my float value is %f\n", my_float);

    // display with 3 decimal places
    printf("my float value with 3 decimal places is %.3f\n", my_float);

    // try to set value more than 6 decimal places
    my_float = 3.14159265358979323846; // set value to20 decimal places
    printf("my float value after setting more decimal places is %f\n\n", my_float); // will print 3.141593 because float can only hold 6 decimal places


    // Double data type
    double my_double = 3.141592653589793;
    printf("my double value is %lf\n", my_double); // will print 3.141593 because use %lf habe 6 decimal places by default

    // display with 15 decimal places
    printf("my double value with 15 decimal places is %.15lf\n\n", my_double); // will print 3.141592653589793 because double can hold 15 decimal places

    // Character data type
    char my_char = 'A';
    printf("my character value is %c\n\n", my_char);

    // Boolean data type
    _Bool my_bool = 1; // 1 for true, 0 for false
    printf("my boolean value is %d\n\n", my_bool);

    // void data type
    void my_void(); // void data type is used to indicate that a function does not return anything

    return 0;
}