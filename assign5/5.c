// Binary search for an element
#include <stdio.h>
int binarysearch(int A[], int l, int r, int x);
void showarray(int A[], int n);
int main()
{
    int A[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    int x, n = sizeof(A) / sizeof(int);
    showarray(A, n);
    printf("Enter the element you want to look up\n");
    scanf("%d", &x);
    int result = binarysearch(A, 0, n - 1, x);
    result == -1 ? printf("Elt not found") : printf("Elt is at %d location", result + 1);
    return 0;
}
int binarysearch(int A[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = (l + r) / 2;
        if (x == A[mid])
            return mid;
        if (x < A[mid])
            return binarysearch(A, l, mid - 1, x);
        else
            return binarysearch(A, mid + 1, r, x);
    }
    return -1;
}
void showarray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %d ", A[i]);
    printf("\n");
}