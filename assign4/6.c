// 6. LCM of two numbers
#include <stdio.h>
int calc_lcm(int, int);
int main()
{
    int x, y, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("HCF of %d and %d is : %d", x, y, calc_lcm(x, y));
}
int calc_lcm(int a, int b)
{
    int lcm = (a > b) ? a : b;
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            return lcm;
        }
        lcm++;
    }
}
