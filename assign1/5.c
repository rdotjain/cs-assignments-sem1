#include <stdio.h>
int main()
{
    int n, d;
    printf("Enter the numerator\n");
    scanf("%d", &n);
    printf("Enter the denominator\n");
    scanf("%d", &d);
    printf("The fraction %d/%d is : %.2f", n, d, (float)n / d);
    return 0;
}