/* Sum and average of array elements */
#include <stdio.h>
void showarray(int[], int n);
int main()
{
    int A[] = {13, 54, 32, 76, 94, 26, 85, 22, 75, 90};
    int n = sizeof(A) / sizeof(int), sum = 0;
    printf("Array is : ");
    showarray(A, n);

    float average;
    for (int i = 0; i < n; i++)
        sum = sum + A[i];
    average = (float)sum / n;

    printf(" Sum of elements = %d and average = %.3f", sum, average);

    return 0;
}
void showarray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %d ", A[i]);
    printf("\n");
}