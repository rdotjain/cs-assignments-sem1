// 8. Add digits of an integer.
#include <stdio.h>
int add_digits(int);
int main()
{
    int n;
    printf("Enter the integer : ");
    scanf("%d", &n);
    printf("The sum of its digits is : %d", add_digits(n));
}

int add_digits(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum = sum + (x % 10);
        x = x / 10;
    }
    return (sum);
}
