// 2. Find factorial.
#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factorial of %d is : %d", n, fact(n));
}
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return (f);
}
