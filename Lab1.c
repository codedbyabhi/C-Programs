#include <stdio.h>

void main() {

    char name[50];
    int age;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Hi %s, you are eligible to vote.\n", name);
    }

    if (age < 18) {
        printf("Sorry %s, you are not eligible to vote.\n", name);
    }
}