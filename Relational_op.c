#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>   // for fabs()

int main(void) {
    printf("===== Relational Operators in C (Deep Dive Demo) =====\n\n");

    int a = 5, b = 10, c = -5;

    // 1. Basic Relational
    printf("a = %d, b = %d\n", a, b);
    printf("a < b : %d\n", a < b);
    printf("a > b : %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // 2. Signed vs Unsigned Pitfall
    int s = -1;
    unsigned int u = 1;
    printf("\nSigned vs Unsigned:\n");
    printf("s = %d, u = %u\n", s, u);
    printf("s < u ? %d   (❌ looks true, actually false due to promotion)\n", s < u);

    // 3. Floating-point comparisons
    double x = 0.0, y = -0.0;
    double nanVal = 0.0/0.0; // NaN
    printf("\nFloating-point:\n");
    printf("0.0 == -0.0 : %d\n", x == y);
    printf("NaN == NaN  : %d\n", nanVal == nanVal);
    printf("NaN != NaN  : %d\n", nanVal != nanVal);

    // Safer floating equality with tolerance
    double f1 = 0.1 * 3, f2 = 0.3;
    double EPS = 1e-9;
    printf("0.1*3 == 0.3 : %d (exact compare)\n", f1 == f2);
    printf("fabs(0.1*3 - 0.3) < EPS : %d (tolerance compare)\n", fabs(f1 - f2) < EPS);

    // 4. Pointers
    printf("\nPointer comparisons:\n");
    int arr[5];
    printf("arr < arr+3 : %d (valid)\n", arr < arr+3);
    int *p = &arr[0], *q = &arr[4];
    printf("p < q       : %d (valid)\n", p < q);

    // ⚠️ Comparing unrelated pointers is UB (not demonstrated here)

    // 5. Chained comparison pitfall
    int val = 100;
    printf("\nChained comparison pitfall:\n");
    printf("(0 < val < 10) = %d (WRONG)\n", 0 < val < 10); 
    printf("(0 < val && val < 10) = %d (CORRECT)\n", (0 < val && val < 10));

    // 6. Boolean as int
    printf("\nRelational operators return int:\n");
    printf("(5 < 10) * 5 = %d\n", (5 < 10) * 5);

    // 7. Professional bound check
    int index = 3, SIZE = 5;
    printf("\nBounds checking:\n");
    if (index >= 0 && index < SIZE)
        printf("index %d is valid in array of size %d\n", index, SIZE);
    else
        printf("index %d is invalid\n", index);

    printf("\n===== End of Demo =====\n");
    return 0;
}

