#include <stdio.h>

int main() {
    int a = 5, b = 10, c;
    int arr[5] = {1,2,3,4,5};

    // Arithmetic Expression
    c = a + b * 2;  
    printf("Arithmetic: %d\n", c);

    // Relational Expression
    printf("Relational: %d\n", (a < b));

    // Logical Expression (short-circuit)
    printf("Logical: %d\n", (a < b && b > 0));

    // Pointer Expression
    int *p = arr;
    printf("Pointer: %d\n", *(p + 3));

    // Assignment Expression
    c = (a = b + 2);  
    printf("Assignment: %d\n", c);

    // Comma Expression
    int x = (a=1, b=2, a+b);
    printf("Comma Expression: %d\n", x);

    // Conditional (Ternary) Expression
    int max = (a > b) ? a : b;
    printf("Ternary Max: %d\n", max);

    return 0;
}
