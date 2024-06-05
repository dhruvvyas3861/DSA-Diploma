//5. Write a program to ƒnd whether the array contains a duplicate number or not. (B)
#include <stdio.h>

int containsDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return 1; // Duplicate found
            }
        }
    }
    return 0; // No duplicate found
}

int main() {
    int n;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read elements into array
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicates
    if (containsDuplicate(arr, n)) {
        printf("The array contains duplicate numbers.\n");
    } else {
        printf("The array does not contain duplicate numbers.\n");
    }

    return 0;
}
