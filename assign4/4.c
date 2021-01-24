// 4. Display first n prime numbers.
#include <stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("First %d prime numbers are: \n", n);
    prime(n);
    return 0;
}
void prime(int x)
{
    int n1 = 2;
    while (x > 0)
    {
        int c = 0;
        for (int i = 2; i < (n1 / 2) + 1; i++)
        {
            if (n1 % i == 0)
            {
                c++;
                break;
            }
        }
        if (c == 0)
        {
            printf("\t%d \n", n1);
            x--;
        }

        n1++;
    }
}
