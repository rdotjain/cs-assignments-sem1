// (b) Fibonacci series
#include <stdio.h>
void fibo(int);
static int n1 = 0, n2 = 1, n3;
int main()
{
    int n;
    printf("Enter a number of terms you want to display: ");
    scanf("%d", &n);
    printf("%d\t%d", n1, n2);
    fibo(n - 2);
}
void fibo(int x)
{
    if (x > 0)
    {
        n3 = n1 + n2;
        printf("\t%d", n3);
        n1 = n2;
        n2 = n3;
        fibo(x - 1);
    }
}
