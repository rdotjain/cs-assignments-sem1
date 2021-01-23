#include <stdio.h>

int main()
{

    //using if-else
    printf("Using if-else ---->\n");
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("The number is even \n");
    else
        printf("The number is odd \n");
    if (a < 0)
        printf("The number is negative \n");
    else
        printf("The number is positive \n");

    //using ternary
    printf("Using ternary ---->\n");
    int b;
    printf("Enter a number: ");
    scanf("%d", &b);
    printf("%s", (b % 2 == 0 ? "Even number \n" : "Odd number \n"));
    printf("%s", (b < 0 ? "Negative number \n" : "Positive number \n"));
}