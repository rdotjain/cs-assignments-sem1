/* Linear search for element */
#include <stdio.h>
int linearSearch(int A[], int n, int elt);
void showarray(int A[], int n);
int main()
{
    int A[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99}, i, elt, n = sizeof(A) / sizeof(int);
    showarray(A, n);
    printf("Enter the element you want to look up\n");
    scanf("%d", &elt);
    int result = linearSearch(A, n, elt);
    if (result != -999)
        printf("Element found at position %d", result);
    else
        printf("Element not found");

    return 0;
}
int linearSearch(int A[], int n, int elt)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] == elt)
            return (i + 1);
    }
    return -999;
}
void showarray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %d ", A[i]);
    printf("\n");
}