//1. Write a program to calculate area of a Circle (A = πr2).ǡ(A)
#include<stdio.h>
float findArea(float r){
	return 	3.14*r*r;
}
void main(){
	float radius=0;
	printf("Enter The Radius of Cicle : ");
	scanf("%f",&radius);
	printf("The radius of the circle is %f",findArea(radius));
}