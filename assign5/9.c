/* Union and intersection of two arrays */
#include <stdio.h>
void showarray(int ARR[], int n);

int main()
{
    int A[] = {1, 2, 3, 6, 7, 9}, n1 = sizeof(A) / sizeof(int);
    int B[] = {3, 6, 4, 8}, n2 = sizeof(B) / sizeof(int);
    int n3 = n1 + n2, n4 = n1;
    int C[n3];
    int D[n4];
    printf("First Array : ");
    showarray(A, n1);
    printf("Second Array : ");
    showarray(B, n2);

    int u = n1, inter = 0, i, j, c = 0;
    for (i = 0; i < n1; i++)
    {
        C[i] = A[i];
        for (j = 0; j < n2; j++)
        {
            if (A[i] == B[j])
            {
                D[inter] = A[i];
                inter++;
            }
        }
    }
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < inter; j++)
        {
            if (B[i] == D[j])
            {
                c++;
                break;
            }
        }
        if (c == 0)
        {
            C[u++] = B[i];
        }
        c = 0;
    }
    printf("Union : ");
    showarray(C, u);
    printf("Intersection : ");
    showarray(D, inter);
}

void showarray(int ARR[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", ARR[i]);
    printf("\n");
}
