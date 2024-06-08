//1. Write a program to implement a Quick Sort using Array. (A)
#include<stdio.h>
#include<conio.h>
void quicksort(int array[], int LB, int UB) {
    if (LB < UB) {
        int pivotIndex = partition(array, LB, UB);
        quicksort(array, LB, pivotIndex - 1);
        quicksort(array, pivotIndex + 1, UB);
    }
}

int partition(int array[], int LB, int UB) {
    int pivot = array[LB];
    int i = LB + 1;
    int j = UB;
    int temp;

    while (i <= j) {
        while (i <= UB && array[i] <= pivot) {
            i++;
        }
        while (j >= LB && array[j] > pivot) {
            j--;
        }
        if (i < j) {
            // Interchange value at index i and j
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // Interchange Pivot and value at jth position
    temp = array[LB];
    array[LB] = array[j];
    array[j] = temp;

    return j;
}

void main()
{
    int n;
    printf("Enter Size of an array :");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Element no %d :",(i+1));
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}