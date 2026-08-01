#include <stdio.h>

int main(void) {
    int age;

    // Prompt user for input with a clean format
    printf("Enter your age: ");
    
    // Read input and check if valid integer was entered
    if (scanf("%d", &age) == 1) {
        printf("Age is: %d\n", age);
    } else {
        printf("Invalid input! Please enter a valid number.\n");
    }

    return 0;
}