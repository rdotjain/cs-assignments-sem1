#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, amount;
    int time;
    printf("Enter the prinicpal amount, rate of interest, time\n");
    scanf("%f %f %d", &principal, &rate, &time);
    amount = (principal * pow((1 + (rate / 100)), time))- principal;
    printf("Interest = %.2f", amount);

    return 0;
}