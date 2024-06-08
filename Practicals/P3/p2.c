//2. Write a program to Copy one string to another string. (A)
#include <stdio.h>
void stringCopy(char *str2, char *str1) {
    while (*str1 != '\0') {
        *str2 = *str1;
        str2++;
        str1++;
    }
    *str2 = '\0';
}
int main() {
    char str1[100], str2[100];
    printf("Enter the source string: ");
    gets(str1);
    stringCopy(str2, str1);
    printf("The copied string is: %s\n", str2);

    return 0;
}

