#include <stdio.h>
#include <math.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d : ", (i + 1));
        scanf("%d", &arr[i]);
    }
    int max = 0, min = 1000000, sum = 0;
    double mean;
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] < min)
            min = arr[j];

        else if (arr[j] > max)
            max = arr[j];

        sum = sum + arr[j];
    }
    mean = sum / 5.0;
    float SD = 0.0;
    for (int i = 0; i < 5; i++)
    {
        SD = SD + pow(arr[i] - mean, 2);
    }
    SD = sqrt(SD / 5);
    printf("The average of numbers is : %.2f \nMaximum value : %d \nMinimum value : %d \nStandard Deviation : %.2f", mean, max, min, SD);

    return 0;
}