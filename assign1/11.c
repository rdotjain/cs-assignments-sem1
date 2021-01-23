#include <stdio.h>
int main()
{
    float basic, da, ta, gross;
    printf("Enter the basic salary\n");
    scanf("%f", &basic);
    da = 0.1 * basic;
    ta = 0.12 * basic;
    gross = basic + da + ta;
    printf("Gross salary is %.3f", gross);

    return 0;
}