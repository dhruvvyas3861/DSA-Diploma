//4. Write a program to delete a given element from an array. (A)
#include <stdio.h>

int main() {
    int n, element, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Find the position of the element to delete
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found\n");
    } else {
        // Shift elements to the left to delete the element
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i+1];
        }
        n--;

        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
