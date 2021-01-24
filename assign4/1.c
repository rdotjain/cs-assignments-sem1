// 1. WAP to swap two variables using with and without a temp variable.
#include <stdio.h>
void swap1(int, int);
void swap2(int, int);
int main()
{
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    printf("Before swapping ----->\n a = %d    b = %d", a, b);
    swap1(a, b);
    swap2(a, b);
}
void swap1(int p, int q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
    printf("\nAfter swapping (using temp)------>\n a = %d    b = %d", p, q);
}
void swap2(int p, int q)
{
    p = p + q;
    q = p - q;
    p = p - q;
    printf("\nAfter swapping (wihtout temp)------>\n a = %d    b = %d", p, q);
}
