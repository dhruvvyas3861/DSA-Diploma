//5. Write a program to insert a given substring into an existing string. (B)
#include <stdio.h>
#include <string.h>

void stringInsert(char *s1, char *sub, int pos,char *new_string) {
    
    while (pos!=0)
    {
        *new_string=*s1;
        new_string++;
        s1++;
    }

    while (*sub!='\0')
    {
        *new_string=*sub;
        new_string++;
        sub++;
    }

    while (*s1!='\0'){
        *new_string=*s1;
        s1++;
        new_string++;
    }
        
}

int main() {
    char str[50], substr[50];
    int pos;
    char new_string[100];

    // Input the main string
    printf("Enter the main string: ");
    gets(str);

    // Input the substring
    printf("Enter the substring: ");
    gets(substr);

    // Input the position to insert the substring
    printf("Enter the position to insert the substring: ");
    scanf("%d", &pos);

    // Insert the substring into the main string
    stringInsert(str, substr, pos,new_string);

    // Display the modified string
    printf("The string after insertion is: %s\n", new_string);

    return 0;
}
