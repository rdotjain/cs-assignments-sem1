#include <stdio.h>
int main()
{
    int n, f = 1;
    printf("Enter a number : ");
    scanf("%d", &n);

    //using for-loop
    for (int i = n; i > 0; i--)
    {
        f = f * i;
    }
    printf("Factorial using for-loop : %d\n", f);
    //using while-loop
    int j = n;
    f = 1;
    while (j > 0)
    {
        f = f * j;
        j--;
    }
    printf("Factorial using while loop : %d\n", f);
    //using do-while loop
    int k = n;
    f = 1;
    do
    {
        f = f * k;
        k--;
    } while (k > 0);
    printf("Factorial using do-while loop : %d\n", f);

    return 0;
}