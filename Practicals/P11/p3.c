//3. Write a program to implement Insertion Sort using Array. (A)
#include <stdio.h>
#include <conio.h>
void InsertionSort(int a[],int n){
for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
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
    InsertionSort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}