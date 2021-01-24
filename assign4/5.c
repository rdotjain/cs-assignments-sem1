// 5. HCF of two numbers
#include <stdio.h>
int calc_hcf(int, int);
int main()
{
    int x, y, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("HCF of %d and %d is : %d", x, y, calc_hcf(x, y));
}
int calc_hcf(int a, int b)
{
    int hcf;
    int j = (a < b) ? a : b;
    for (int i = 1; i <= j; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
