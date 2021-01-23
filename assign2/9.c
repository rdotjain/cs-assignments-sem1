#include <stdio.h>
int main()
{
    float a = 5 / 7;
    printf("5 / 7 --> %f\n", a);
    a = (float)5 / (float)7;
    printf("(float)5 / (float)7 --> %f\n", a);

    return 0;
}