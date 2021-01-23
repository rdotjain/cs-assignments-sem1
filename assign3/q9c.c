#include <stdio.h>
int main()
{
    int x, n, ans = 1;
    printf("Enter the value of X and n : ");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        ans = ans * x;
    }
    printf("X raised to power n is : %d", ans);
    return 0;
}