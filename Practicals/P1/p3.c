//3. Write a program to ƒnd factorial of a number. (Using Loop)ǡ(A)
#include<stdio.h>
int fact(int n){
	int fact=1,i;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
void main(){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,fact(n));
}