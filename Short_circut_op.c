#include <stdio.h>
#include<stdlib.h>
int risky(int x) {
    printf("risky(%d) called\n", x);
    return x > 5;
}

int main() {
    int a = 0, b = 10;

    // AND short-circuit
    if (a && risky(b)) {
        printf("Both true\n");
    } else {
        printf("Skipped risky() due to short-circuit AND\n");
    }

    // OR short-circuit
    if (b || risky(a)) {
        printf("Skipped risky() due to short-circuit OR\n");
    }

    // Difference with bitwise
    if (a & risky(b)) {
        printf("Bitwise executed risky()\n");
    }

    return EXIT_SUCCESS;
}
