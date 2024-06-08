#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define size 100
int s[size], top = -1;

void push(int val)
{
    if (top == size - 1)
        printf("Stack Overflow\n\n");
    else
        s[++top] = val;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is Underflow\n");
        return 0;
    }
    else
        return s[top--];
}

double calculate(char c, double a, double b)
{
    switch (c)
    {
    case '+':
        return (a + b);
    case '-':
        return (a - b);
    case '*':
        return (a * b);
    case '/':
        if (b == 0)
        {
            printf("Division by Zero\n");
            exit(EXIT_FAILURE);
        }
        return (a / b);
    default:
        return 0;
    }
}
double evaluate(const char *expression)
{
    int len = strlen(expression);
	int i,j;
    for (i = len - 1; i >= 0; i--)
    {
        char c = expression[i];
        if (c == ' ')
        {
            continue;
        }
        else if (isdigit(c))
        {
            int num = 0;
            char temp[size] = "";
            int tempIndex = 0;

            while (i >= 0 && isdigit(expression[i]))
            {
                temp[tempIndex++] = expression[i--];
            }
            i++;

            char str[size] = "";
            int strIndex = 0;
            for (j = tempIndex - 1; j >= 0; j--)
            {
                str[strIndex++] = temp[j];
            }
            str[strIndex] = '\0';
            sscanf(str, "%d", &num);
            push(num);
        }
        else
        {
            double op1 = pop();
            double op2 = pop();
            push(calculate(c, op1, op2));
        }
    }
    return pop();
}
void main()
{
    char ex[size];
    printf("Enter Prefix: ");
    gets(ex);
    printf("Answer is : %lf\n", evaluate(ex));
}
