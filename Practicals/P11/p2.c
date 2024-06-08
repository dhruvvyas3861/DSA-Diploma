//2. Write a program to implement Selection Sort using Array. (A)
#include <stdio.h>
#include <conio.h>
void SelectionSort(int a[],int n,int min){
for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(a[min]!=a[i])
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}
void main()
{
    int n;
    printf("Enter Size of an array :");
    scanf("%d",&n);
    int a[n];
    int min;
    for(int i=0;i<n;i++)
    {
        printf("Enter Element no %d :",(i+1));
        scanf("%d",&a[i]);
    }
    SelectionSort(a,n,min);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}