#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int c = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c++;
            break;
        }
    }
    if (c == 0)
        printf("It's a prime number");
    else
        printf("It's not a prime number");

    return 0;
}