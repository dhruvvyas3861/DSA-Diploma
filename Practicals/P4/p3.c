#include <stdio.h>

void toUppercase(char *str,char *str2) {
    while (*str!='\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str2 = *str - 32;
        }
        else{
            *str2=*str;
        }
        str++;
        str2++;
    }
    *str2='\0';
}

void toLowercase(char *str,char *str2) {
    while (*str!='\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str2 = *str + 32;
        }
        else{
            *str2=*str;
        }
        str++;
        str2++;
    }
    *str2='\0';
}

int main() {
    char str[100];
    char str2[100];
    printf("Enter a string: ");
    gets(str);
    toUppercase(str,str2);
    printf("The string in uppercase is: %s\n", str2);
    toLowercase(str,str2);
    printf("The string in lowercase is: %s\n", str2);
    return 0;
}
