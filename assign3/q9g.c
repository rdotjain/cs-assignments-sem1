#include <stdio.h>
int main()
{
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int j = (a < b) ? a : b;
    for (int i = 1; i <= j; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            //printf("%d",i);
            hcf = i;
        }
    }
    printf("HCF of %d and %d is : %d", a, b, hcf);
}