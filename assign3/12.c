#include <stdio.h>
int main()
{
    int n, even, count = 0;
    for (int i = 1; i <= 20; i++)
    {
        printf("Enter an integer\n");
        scanf("%d", &n);
        if (n % 2 == 0)
            count++;
    }
    printf("No of even integers = %d", count);

    return 0;
}