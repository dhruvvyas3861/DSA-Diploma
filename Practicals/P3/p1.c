//1. Write a program to ƒind the length of the given string. (A)
#include<stdio.h>
int countLength(char *name){
    int len=0;
    while (*name!='\0')
    {
        len=len+1;
        name++;
    }
    return len;   
}
int main()
{
    char name[50];
    printf("Enter String :");
    gets(name);
    printf("The length of the string is: %d\n", countLength(name));
    return 0;
}