#include <stdio.h>
int main()
{
    int n = 0, sum = 0;
    while (n != -999)
    {
        sum = sum + n;
        printf("Enter a number\n");
        scanf("%d", &n);
    }
    printf("Sum is : %d ", sum);
}