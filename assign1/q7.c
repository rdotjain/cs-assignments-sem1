#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float r;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Enter the root you want to calculate\n");
    scanf("%f", &r);
    printf("The desired root of %d is %.3f", n, pow(n, 1 / r));

    return 0;
}