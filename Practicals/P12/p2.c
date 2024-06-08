#include<stdio.h>
void merge(int a[],int len,int lb,int mid,int ub){
	int size =(ub-lb)+1;
	int b[size];
	int i=lb;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=ub){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
		while(j<=ub){
			b[k]=a[j];
			k++;
			j++;
		}
	else
		while(i<=mid){
			b[k]=a[i];
			k++;
			i++;
		}
	for(i=0;i<size;i++,lb++)
		a[lb]=b[i];
}
void mergeSort(int a[],int len,int lb,int ub){
	if(lb<ub){
		int mid =(lb+ub)/2;
		mergeSort(a,len,lb,mid);
		mergeSort(a,len,mid+1,ub);
		merge(a,len,lb,mid,ub);
	}
	
}

void main(){
	int i,size;
	printf("Enter Array Size :");
	scanf("%d",&size);
	int a[size];

	for(i=0;i<size;i++){
		printf("Enter Element no %d: ",(i+1));
		scanf("%d",&a[i]);
	}
	
	mergeSort(a,size,0,size-1);

	printf("\nSorted Array:");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
}
