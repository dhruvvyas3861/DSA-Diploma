//2. Write a program to display the reverse string of the given string. (A)
#include <stdio.h>

void stringReverse(char *str1,char *str2) {
    int i=0;
    while (*str1!='\0')
    {
        str1++;
        i++;
    }
    str1--;
    while (i>0)
    {
       *str2=*str1;
       str1--;
       str2++;
       i--;
    }
    *str2='\0';
    
    
}

int main() {
    char str1[100];
    char str2[100];
    // Input the string
    printf("Enter a string: ");
    gets(str1);

    // Reverse the string
    stringReverse(str1,str2);

    // Display the reversed string
    printf("The reversed string is: %s\n", str2);

    return 0;
}
