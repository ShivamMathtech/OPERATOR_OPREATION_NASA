#include <stdio.h>

unsigned int rol(unsigned int x, unsigned int n) {
    return (x << n) | (x >> (32 - n)); // Rotate Left
}

int main() {
    unsigned int a = 29, b = 23;

    printf("a = %u, b = %u\n", a, b);
    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);
    printf("a ^ b = %u\n", a ^ b);
    printf("~a = %u\n", ~a);
    printf("a << 2 = %u\n", a << 2);
    printf("b >> 1 = %u\n", b >> 1);
    printf("Rotate Left a by 3 = %u\n", rol(a, 3));

    return 0;
}



