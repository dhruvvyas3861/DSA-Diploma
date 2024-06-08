#include<stdio.h>

int linearSearch(int a[],int len,int target){
	int i;
	for(i=0;i<len;i++)
		if(a[i]== target)
			return i;
	return -1;
}

void main(){
	int i,index,target,size;
	printf("Enter Array Size :");
	scanf("%d",&size);
	int a[size];

	for(i=0;i<size;i++){
            printf("Enter Element no %d : ",(i+1));
            scanf("%d",&a[i]);
	}
    
	printf("Enter Search Number:");
	scanf("%d",&target);
	
	index = linearSearch(a,size,target);
	
	if(index != -1)
	      printf("%d Element found at %d ",target,(index+1));
	else
		printf("%d Not Found in Array",target);
}
