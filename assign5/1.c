/* Reverse an array */

#include <stdio.h>
int main()
{
    int original_arr[] = {1, 2, 3, 4, 5};
    int reversed_arr[5];

    // Displaying original array
    printf("Original array :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", original_arr[i]);
    }

    // Reversing array
    for (int i = 0; i < 5; i++)
    {
        reversed_arr[i] = original_arr[4 - i];
        // printf("%d \t", original_arr[4-i]);
    }

    // Displaying reversed array
    printf("\nReversed array :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", reversed_arr[i]);
    }

    return 0;
}