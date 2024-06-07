//1. Write a program to implement a Bubble using Array. (A)
#include <stdio.h>
#include <conio.h>
void BubbleSort(int a[],int n){
for(int i=1;i<=n-1;i++)
    {
       for(int j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
       }
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
    BubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}