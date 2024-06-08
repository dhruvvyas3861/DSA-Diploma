//1. Write a program to compare two strings. (A)
#include <stdio.h>
int countLength(char *name){
    int len=0;
    while (*name!='\0')
    {
        len=len+1;
        name++;
    }
    return len;   
}
int stringCompare(char *str1, char *str2) {
    int i1,i2,flag=0,i=0;
    i1=countLength(str1);
    i2=countLength(str2);
    if(i1!=i2){
        return(0);
    }
    while (i<i1)
    {
        if(*str1!=*str2){
            return(0);
        }
        else{
            str1++;
            str2++;
            i++;
            flag=1;
        }
        if(flag==1){
            return(1);
        }
    }
    
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    int result = stringCompare(str1, str2);
    if (result == 1) {
        printf("The strings are equal.\n");
    } else{
        printf("Both String Are different");
    }

    return 0;
}
