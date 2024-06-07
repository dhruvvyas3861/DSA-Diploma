//5. Write a program to insert a given substring into an existing string. (B)
#include<stdio.h>
void STRINSERTION(char *s1,int p,char *sub,char *temp){
	while(p != 0)
	{
		*temp++ = *s1++;
		p--;
	}
	while(*sub != '\0')
		 *temp++ = *sub++;
	while(*s1 != '\0')
	{
		 *temp++ = *s1++;
	}
}

void main(){
	char new_str[50];
	char s1[50] = "Hi Welcome";
	char sub[10] = "Hello";
	int pos = 3;
	STRINSERTION(s1, pos, sub, new_str);
	printf("\n Display resultant string: ");
	puts(new_str);
}