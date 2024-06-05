//6. Write a program to retrieve the substring from the given string. (B)
#include <stdio.h>
void substring(char str[], int pos, int len) {
    char substr[50];
    int i=0;
    pos=pos-1;
    while(len!=0){
        substr[i]=str[pos];
        i++;
        pos++;
        len--;

    }
    substr[i]='\0';
    
    // Display the substring
    printf("The retrieved substring is: %s\n", substr);
}

int main() {
    char str[100], substr[100];
    int pos, len;

    // Input the main string
    printf("Enter the main string: ");
    gets(str);

    // Input the starting position and length of the substring
    printf("Enter the starting position of the substring: ");
    scanf("%d", &pos);
    printf("Enter the length of the substring: ");
    scanf("%d", &len);

    // Retrieve the substring from the main string
    substring(str, pos, len);

    

    return 0;
}
