//8. Write a program to print Armstrong number from 1 to 1000. (C)
#include<stdio.h>
#include<stdbool.h>
int pow(int base,int exponent){
	int result=1,i;
	for(i=1;i<=exponent;i++){
		result*=base;
	}
	return result;
}

bool armstrong(int n){
	int temp=n,len=0,sum=0;
	while(0<n){
		len++;
		n=(int)n/10;		
	}
	n=temp;
	while(0<n){
		int digit = n%10;
		sum=sum+pow(digit,len);
		n=(int)n/10;			
	}
	if(temp==sum) 
		return true;
	else 
		return false;
}

void main(){
	int i;
	for(i=1;i<1001;i++){
		if(armstrong(i))
			printf("%d ",i);
	}
}