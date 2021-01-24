/* Find largest and smallest in array */
#include <stdio.h>
int main()
{
    int n, max = 0, min = 999999;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        if(A[i] < min)
            min = A[i];
        if(A[i] > max)
            max = A[i];
    }
    printf("Largest element : %d\nSmallest element : %d", max, min);
    return 0;
}