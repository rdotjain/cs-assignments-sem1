#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integers : ");
    scanf("%d %d", &a, &b);
    printf("Sum : %d\n", a + b);
    printf("Difference : %d\n", a - b);
    printf("Product : %d\n", a * b);
    printf("Division : %.2f\n", (float) a / b);

    return 0;
}