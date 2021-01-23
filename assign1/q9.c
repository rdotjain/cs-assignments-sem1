#include <stdio.h>
int main()
{
    float principal, rate, amount;
    int time;
    printf("Enter the prinicpal amount, rate of interest, time\n");
    scanf("%f %f %d", &principal, &rate, &time);
    amount = (principal * rate * time)/100;
    printf("Interest = %.2f", amount);

    return 0;
}