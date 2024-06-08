#include<stdio.h>
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
int binarySearch(int a[],int lb,int ub,int target){
	int mid =0;
	while(lb<=ub){
		mid = (lb+ub)/2;
		if(a[mid]==target)
			return mid;
		else if(a[mid]>target)
			ub = mid-1;
		else
			lb = mid+1;
	}
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
    InsertionSort(a,size);
    
	printf("Enter Search Number:");
	scanf("%d",&target);
    printf("After Sorting \n");
    for(i=0;i<size;i++){
        printf("Index %d -> %d \n ",(i+1),a[i]);
    }
	index = binarySearch(a,0,size,target);

	if(index != -1)
		printf("%d Element found at %d ",target,(index+1));
	else
		printf("%d Not Found in Array",target);
}
