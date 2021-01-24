// 7. Fibonacci series of n numbers
#include <stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("Enter the number of terms you want to display : ");
    scanf("%d", &n);
    fibo(n);
}
void fibo(int x)
{
    int n1 = 0, n2 = 1, n3 = 0;
    printf("%d\t%d", n1, n2);
    for (int i = 3; i <= x; i++)
    {
        n3 = n1 + n2;
        printf("\t%d", n3);
        n1 = n2;
        n2 = n3;
    }
}
