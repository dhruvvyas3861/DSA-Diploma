//2. Write a program to ƒnd whether a number is odd or even.ǡ(A)
#include<stdio.h>
void oddOrEven(int n){
	if(n%2==0)
		printf("Number is even");
	else
		printf("Number is odd");
}
void main(){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	oddOrEven(n);
}