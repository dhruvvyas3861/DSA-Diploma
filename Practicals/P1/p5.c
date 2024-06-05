//5. Write a program to ƒnd factors of a given number.ǡ(B)
#include<stdio.h>
void factors(int n){
	int i;
	for(i=1;i<=n;i++){
		if(n%i==0)
			printf("%d,",i);
	}
}
void main(){
	int n;
	printf("Enter Number: ");
    scanf("%d", &n);
    factors(n);
}