#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 8 != 0)
        printf("The number is divisible only by 5");

    else if (n % 5 != 0 && n % 8 == 0)
        printf("The number is divisible only by 8");

    else if (n % 5 == 0 && n % 8 == 0)
        printf("The number is divisible by both 5 and 8");

    else
        printf("The number is divisible neither by 5 nor 8");

    return 0;
}