#include <stdio.h>

int main()
{
    int a, b;
    char c;
    int result;
    printf("Enter the operation you want to perform : '+' '-' '*' '/' '%%'");
    scanf("%c", &c);

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    switch (c)
    {
    case '+':
        result = a + b;
        break;

    case '-':
        result = a - b;
        break;

    case '*':
        result = a * b;
        break;

    case '/':
        result = a / b;
        break;

    case '%':
        result = a % b;
        break;

    default:
        printf("Invalid input");
        break;
    }
    printf("Result is: %d", result);
    return 0;
}