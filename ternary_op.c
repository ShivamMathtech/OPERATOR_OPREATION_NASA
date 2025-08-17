#include <stdio.h>

int main() {
    int a = 15, b = 20;

    // Simple ternary
    int max = (a > b) ? a : b;
    printf("Max: %d\n", max);

    // Nested ternary
    int score = 76;
    char grade = (score >= 90) ? 'A' :
                 (score >= 80) ? 'B' :
                 (score >= 70) ? 'C' :
                 (score >= 60) ? 'D' : 'F';
    printf("Grade: %c\n", grade);

    // Prevent division by zero
    int x = 10, y = 0;
    int div = (y != 0) ? (x / y) : 0;
    printf("Division result: %d\n", div);

    // Pointer choice
    int *p = (a > b) ? &a : &b;
    printf("Chosen pointer value: %d\n", *p);

    return 0;
}
