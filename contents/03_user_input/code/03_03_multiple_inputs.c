#include<stdio.h>
int main() {
    int my_number;
    char my_char;

    printf("Type a number AND a character and press enter: \n");

    scanf("%d %c", &my_number, &my_char);       // Get and save the number AND character the user types
    printf("Your number is: %d\n", my_number);  // Print the number
    printf("Your character is: %c\n", my_char); // Print the character
    
    return 0;
}
