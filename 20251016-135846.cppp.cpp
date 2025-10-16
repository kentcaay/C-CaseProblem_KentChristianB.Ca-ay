#include <stdio.h>

int main() {
    
    printf("Name: Kent Christian B. Ca-ay\n");
    printf("ID Number: 2025304334\n");
    printf("------------------------------\n");

    float grade;

    printf("Enter your grade: ");
    scanf("%f", &grade);

    if (grade >= 90 && grade <= 100)
        printf("Result: Excellent! You got an A.\n");
    else if (grade >= 80 && grade < 90)
        printf("Result: Very Good! You got a B.\n");
    else if (grade >= 70 && grade < 80)
        printf("Result: Good! You got a C.\n");
    else if (grade >= 60 && grade < 70)
        printf("Result: Needs Improvement. You got a D.\n");
    else if (grade >= 0 && grade < 60)
        printf("Result: Failed. You got an F.\n");
    else
        printf("Invalid grade! Please enter a number between 0 and 100.\n");

    return 0;
}
