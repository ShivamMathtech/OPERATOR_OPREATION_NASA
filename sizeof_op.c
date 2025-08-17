#include <stdio.h>

int main() {
    char *p = "Hello";
    printf("%zu\n", sizeof(p));    // 8 (pointer size)
    printf("%zu\n", sizeof(*p));   // 1 (char)
    printf("%zu\n", sizeof("Hello")); // 6 (includes '\0')

    int arr[5];
    printf("%zu\n", sizeof(arr));     // 20
    printf("%zu\n", sizeof(&arr));    // 8 (pointer to array)

    struct { char c; double d; } s;
    printf("%zu\n", sizeof(s));       // Typically 16 due to padding
}
