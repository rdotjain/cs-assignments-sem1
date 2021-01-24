/* Merge two arrays */
#include <stdio.h>
void showarray(int ARR[], int n);
void mergearray(int[], int[], int[], int, int);
int main(){
    int A[] = {1, 2, 3, 4, 5}, n1 = sizeof(A)/sizeof(int);
    int B[] = {33, 44, 55, 66}, n2 = sizeof(B)/sizeof(int);
    printf("Array 1 : ");
    showarray(A, n1);
    printf("Array 2 : ");
    showarray(B, n2);
    int C[n1 + n2];
    mergearray(A, B, C, n1, n2);
    printf("Merged array : ");
    showarray(C, n1+n2);
    return 0;
}

void mergearray(int A[], int B[], int C[], int n1, int n2)
{
    int i, k;
    for( i = 0; i < n1; i++)
        C[i] = A[i];
    k = i;
    for(i = 0; i < n2; i++)
        C[i + k] = B[i];
}

void showarray(int ARR[], int n)
{
    for(int i = 0; i<n; i++)
        printf("%d ", ARR[i]);
    printf("\n");
}