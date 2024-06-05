//2. Write a program to calculate the sum of numbers from 1 to n. (A)
#include <stdio.h>
int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the sum
    printf("The sum of numbers from 1 to %d is %d\n", n, sum);

    return 0;
}
