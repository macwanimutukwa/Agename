#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Categorize the age using if-else statements
    if (age < 13) {
        printf("You are a child!\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a teenager!\n");
    } else {
        printf("You are an adult!\n");
    }

    return 0;
}
