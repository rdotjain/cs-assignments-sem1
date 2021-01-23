#include <stdio.h>
int main()
{
    int min, max, range, n, set;

    printf("Enter the numbers of inputs\n");
    scanf("%d", &set);
    printf("Enter a number\n");
    scanf("%d", &n);
    min = max = n;
    set = set - 1;

    while (set > 0)
    {
        printf("Enter a number\n");
        scanf("%d", &n);

        if (n > max)
        {
            max = n;
        }

        if (n < min)
        {
            min = n;
        }
        set--;
    }
    printf("\nStarting range = %d\nEnding range = %d\n", min, max);

    return 0;
}