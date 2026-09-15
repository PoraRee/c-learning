#include<stdio.h>

// Pass by Value: The function gets a copy of the number
void increment_by_value(int num) {
    num = num + 1; // Only modifies the local copy
}

// Pass by Reference (via Pointers): The function gets the address of the number
// NOTE: We will discuss about pointer later.
void increment_by_reference(int *numPtr) {
    *numPtr = *numPtr + 1; // Modifies the original variable at that address
}

int main() {
    int my_number = 10;
    printf("Original value: %d\n", my_number);

    // 1. Testing Pass by Value
    increment_by_value(my_number);
    printf("After incrementByValue: %d (No change)\n", my_number);

    // 2. Testing Pass by Reference (we pass the address using '&')
    increment_by_reference(&my_number);
    printf("After incrementByReference: %d (Successfully changed!)\n", my_number);

    return 0;
}