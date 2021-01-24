/* Sort array in ascending order */
#include <stdio.h>
void showarray(int[], int);
int main()
{
    int A[] = { 4, 6, 8, 2, 9, 3, 1, 7, 5}, n = sizeof(A)/sizeof(int);
    printf("Demo array : ");
    showarray(A, n);
    int temp;
    for(int i = 0; i< n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(A[j] < A[i])
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
    printf("Sorted array : ");
    showarray(A, n);
    return 0;
}
void showarray(int ARR[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", ARR[i]);
    printf("\n");
}