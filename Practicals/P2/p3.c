//3. Write a program to insert an element into an array at a given position.(A)
#include <stdio.h>
int main() {
    int n, pos, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1]; // Extra space for the new element

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element to insert
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Insert element at the specified position
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = element;
    n++;
    
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
