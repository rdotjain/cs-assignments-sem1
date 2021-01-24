/* Delete a given element in an array */
/* To insert an element at a given location of an array */
#include <stdio.h>
void deleteElt(int A[], int n, int pos);
void showarray(int A[], int n);
int main()
{
    int A[10] = {11, 22, 33, 44, 55}, i, n = sizeof(A) / sizeof(int);
    showarray(A, n);
    printf("Deleting element at position 3\n");
    deleteElt(A, n, 3);
    showarray(A, n);

    return 0;
}
void deleteElt(int A[], int n, int pos)
{
    int i;
    for (i = pos - 1; i < n; i++)
    {
        A[i] = A[i + 1];
    }
}
void showarray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %d ", A[i]);
    printf("\n");
}