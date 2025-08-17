#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("===== Arithmetic Operators in C (Deep Dive Demo) =====\n\n");

    int a = 10, b = 3;
    float f1 = 5.0, f2 = 2.0;

    // 1. Addition & Subtraction
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);

    // 2. Multiplication
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);

    // 3. Division (int vs float)
    printf("Integer Division: %d / %d = %d\n", a, b, a / b);
    printf("Floating Division: %.2f / %.2f = %.2f\n", f1, f2, f1 / f2);

    // 4. Modulo
    printf("Modulo: %d %% %d = %d\n", a, b, a % b);
    printf("Modulo with negatives: -10 %% 3 = %d\n", -10 % 3);

    // 5. Unary Plus & Minus
    printf("Unary Plus: +%d = %d\n", a, +a);
    printf("Unary Minus: -%d = %d\n", a, -a);

    // 6. Integer Promotion
    char c1 = 100, c2 = 50;
    char c3 = c1 + c2;   // promoted to int
    printf("Integer Promotion (char): 100 + 50 = %d (stored in char)\n", c3);

    // 7. Overflow Example
    int x = INT_MAX;
    printf("INT_MAX = %d\n", INT_MAX);
    printf("Overflow (Undefined Behavior!): INT_MAX + 1 = %d (wrong)\n", x + 1);

    unsigned int ux = UINT_MAX;
    printf("Unsigned Wraparound: UINT_MAX + 1 = %u (well-defined)\n", ux + 1);

    // 8. Bit Shift Optimization
    int shiftVal = 16;
    printf("Shift Left (x * 2): %d << 1 = %d\n", shiftVal, shiftVal << 1);
    printf("Shift Right (x / 2): %d >> 1 = %d\n", shiftVal, shiftVal >> 1);

    // 9. Modulo Optimization for Power-of-2
    int SIZE = 8;  // Power of 2
    int index = 19;
    printf("Modulo with %% : %d %% %d = %d\n", index, SIZE, index % SIZE);
    printf("Modulo with & : %d & (%d-1) = %d (faster)\n", index, SIZE, index & (SIZE - 1));

    // 10. Floating-point precision
    double d1 = 0.1, d2 = 0.2;
    printf("Floating Precision: 0.1 + 0.2 = %.17f (not exactly 0.3)\n", d1 + d2);

    // 11. Safe Arithmetic Checks
    int m = 50000, n = 50000;
    if (m != 0 && n > INT_MAX / m)
        printf("Safe Multiplication Check: Overflow detected!\n");
    else
        printf("Safe Multiplication Result: %d\n", m * n);

    // 12. Branchless Absolute Value (bitwise trick)
    int neg = -42;
    int abs_val = (neg ^ (neg >> 31)) - (neg >> 31);
    printf("Branchless Abs: |-42| = %d\n", abs_val);

    printf("\n===== End of Demo =====\n");
    return 0;
}
