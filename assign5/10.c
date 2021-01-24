/* Remove duplicates in an array */
#include <stdio.h>
void showarray(int ARR[], int n);

int main()
{
    int A[] = {1, 2, 3, 2, 9, 1, 1, 6, 7, 9}, n = sizeof(A) / sizeof(int);
    printf("Original Array : ");
    showarray(A, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] == A[i])
            {
                for (int k = j; k < n; k++)
                {
                    A[k] = A[k + 1];
                }
                j--;
                n--;
            }
        }
    }
    printf("Resultant array : ");
    showarray(A, n);
    return 0;
}
void showarray(int ARR[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", ARR[i]);
    printf("\n");
}