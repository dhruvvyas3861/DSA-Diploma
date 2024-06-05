/*
1. Write a menu-driven program to implement the following operations on the Stack using an Array: (A)
i. PUSH, POP
ii. Display all elements of the stack
iii. PEEP, CHANGE
*/
#include <stdio.h>
#define N 7
int stack[N],top=-1;
void push(int x){
	if(top>N)
	{
		printf("Stack Overflow...");
	}
	else{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack Underflow...");
	}
	else{
		printf("Element Deleted...%d",stack[top]);
		top--;
	}
}
void display()
{
	int i=0;
	if(top==-1)
	{
		printf("Stack Underflow...");
	}
	else{
		for(i=top;i>=0;i--)
		{
			printf("\n Element %d",stack[i]);
		}
	}
}
void peep(int pos)
{
	if(pos-1<0)
	{
		printf("Stack Underflow...");
	}
	else{
	printf("Element : %d ",stack[pos-1]);

	}
}
void change(int pos,int chng)
{
	if(pos-1<0)
	{
		printf("Stack Underflow...");
	}
	else{
		stack[pos-1]=chng;
		printf("Value Upated...");
	}

}
void main()
{
	int ch,a,ps;
	while(1){
	printf("\nEnter 1 for Push");
	printf("\nEnter 2 for Pop");
	printf("\nEnter 3 for Peep");
	printf("\nEnter 4 for Change");
	printf("\nEnter 5 for Display");
	printf("\nEnter 6 for Exit");

	printf("\nEnter Ur choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter Value :");
			scanf("%d",&a);
			push(a);
			break;
		case 2:
			pop();
			break;

		case 3:
			printf("Enter Position :");
			scanf("%d",&ps);
			peep(ps);
			break;

		case 4:
			printf("Enter Position :");
			scanf("%d",&ps);
			printf("Enter Value :");
			scanf("%d",&a);
			change(ps,a);
			break;

		case 5:
			display();
			break;
		case 6:
			return;
	}
	}
	
}   