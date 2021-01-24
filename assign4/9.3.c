// (c) Summation of n
#include <stdio.h>
int summation(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is : %d", n, summation(n));
}
int summation(int x)
{
    if (x > 0)
    {
        return (x + summation(x - 1));
    }
    else
        return 0;
}
