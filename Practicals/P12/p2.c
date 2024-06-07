//2. Write a program to implement a Merge Sort using Array. (B)
#include<stdio.h>
#include<conio.h>
void mergeSort(int a1[], int n1, int a2[], int n2, int a3[]) {
    int I = 0, J = 0, K = 0;
    while (I < n1 && J < n2) {
        if (a1[I] < a2[J]) {
            a3[K] = a1[I];
            K++;
            I++;
        } else if (a1[I] > a2[J]) {
            a3[K] = a2[J];
            K++;
            J++;
        } else {
            a3[K] = a1[I];
            K++;
            I++;
            J++;
        }
    }
    while (I < n1) {
        a3[K] = a1[I];
        K++;
        I++;
    }
    while (J < n2) {
        a3[K] = a2[J];
        K++;
        J++;
    }
}
void main()
{
    int n1;
    int n2;
    printf("Enter Size of an array 1 :");
    scanf("%d",&n1);
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        printf("Enter Element no %d :",(i+1));
        scanf("%d",&a1[i]);
    }
    printf("Enter Size of an array 2 :");
    scanf("%d",&n2);
    int a2[n2];
    for(int i=0;i<n2;i++)
    {
        printf("Enter Element no %d :",(i+1));
        scanf("%d",&a2[i]);
    }
    int a3[n1+n2];
    mergeSort(a1, n1, a2, n2, a3);
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d  ",a3[i]);
    }
}