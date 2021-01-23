#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want to display : ");
    scanf("%d", &n);
    int n1 = 0;
    int n2 = 1;
    int n3;
    printf("%d %d ", n1, n2);
    for (int i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
}