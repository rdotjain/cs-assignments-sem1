#include <stdio.h>
int main()
{
    int days;
    float fine;
    printf("Enter the no. of days the book is late : ");
    scanf("%d", &days);

    if (days <= 5)
    {
        fine = 0.5 * days;
    }
    else if (days <= 10)
    {
        fine = (0.5 * 5) + 1 * (days - 5);
    }
    else
    {
        fine = (0.5 * 5) + 5 + (days - 10) * 5;
    }

    if (days > 30)
        printf("Your membership has been cancelled\n");

    printf("Your fine is : Rs.%.2f", fine);

    return 0;
}