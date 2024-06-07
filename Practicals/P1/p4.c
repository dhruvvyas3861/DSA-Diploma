//4. Write a program to ƒnd power of a number using loop.ǡ(A)
#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    
    // Input from user
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    int result = power(base, exponent);
    printf("%d to the power of %d is %d\n", base, exponent, result);
    return 0;
}
