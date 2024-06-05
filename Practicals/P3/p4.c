//4. Write a program to append a second string at the end of the ƒirst string. (A)
#include <stdio.h>

void stringAppend(char *s1, char *s2) {
    while (*s1 != '\0') {
        s1++;
    }
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char str1[100], str2[100];

    // Input the first string
    printf("Enter the first string: ");
    gets(str1);

    // Input the second string
    printf("Enter the second string: ");
    gets(str2);

    // Concatenate the second string to the first string
    stringAppend(str1, str2);

    // Display the concatenated string
    printf("The concatenated string is: %s\n", str1);

    return 0;
}
