//7. Write a program to ƒnd the sum of 1 + (1+2) + (1+2+3) + …+(1+2+3+4+….+n).ǡ(C)
int sum(int n){
	int i,j,sum=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			sum+=j;
		}	
	}
	return sum;
}
void main(){
	int n;
	printf("Enter number : ");
    scanf("%d", &n);
    printf("sum : %d",sum(n));
}