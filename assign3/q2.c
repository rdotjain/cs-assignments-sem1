#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three number you want to compare: ");
    scanf("%d %d %d", &a, &b, &c);

    //using if-else
    if (a > b && a > c)
    {
        printf("%d is the largest", a);
    }

    else if (b > a && b > c)
    {
        printf("%d is the largest", b);
    }

    else
    {
        printf("%d is the largest", c);
    }

    //using ternary
    int d = (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
    printf("%d is the greatest", d);

    return 0;
}