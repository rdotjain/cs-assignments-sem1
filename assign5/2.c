/* To insert an element at a given location of an array */
#include <stdio.h>
void insertElt(int A[], int n, int elt, int pos);
void showarray(int A[], int n);
int main()
{
    int A[10] = {11, 22, 33, 44, 55}, i, n = sizeof(A) / sizeof(int);
    showarray(A, n);
    insertElt(A, n, 3333, 3);
    printf("Inserted 3333 at position 3\n");
    showarray(A, n);
    
    return 0;
}
void insertElt(int A[], int n, int elt, int pos)
{
    int i;
    for (i = n - 1; i > pos - 1; i--)
        A[i] = A[i - 1];
    A[pos - 1] = elt;
}
void showarray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %d ", A[i]);
    printf("\n");
}