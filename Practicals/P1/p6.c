//6. Write a program to check whether a number is prime or not.ǡ(B)
#include<stdio.h>
void isPrime(int n){
	int i;
	int flag=0;
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		} 
	}
	if(flag==0) 
        printf("number is prime  ");
	else
        printf("number is not prime");
}
void main(){
	int n;
	printf("enter number :");
	scanf("%d",&n);
	isPrime(n);
}