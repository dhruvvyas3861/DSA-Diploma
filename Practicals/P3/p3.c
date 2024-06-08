//3. Write a program to perform the concatenation of two given strings. (A)
#include <stdio.h>

void stringConcatenate(char *s1, char *s2,char *s3) {
    while (*s1 != '\0') {
        *s3=*s1;
        s1++;
        s3++;
    }
    while (*s2 != '\0') {
        *s3 = *s2;
        s3++;
        s2++;
    }
    *s3 = '\0';
}

int main() {
    char str1[100], str2[100],str3[200];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    stringConcatenate(str1, str2,str3);

    printf("The concatenated string is: %s\n", str3);

    return 0;
}
