// 3. If a number is prime or not.
#include <stdio.h>
void check_prime(int);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    check_prime(n);
}

void check_prime(int x)
{
    int c = 0;
    for (int i = 2; i < x / 2; i++)
    {
        if (x % i == 0)
        {
            c++;
            break;
        }
    }
    if (c == 0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}
