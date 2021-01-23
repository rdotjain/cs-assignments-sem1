#include <stdio.h>
int main()
{
    int a = 10;
    printf("Demonstrating assignment operators\nIf a = 10\n");
    printf("a += 5 --> %d \n", a+=5); a = 10;
    printf("a -= 3 --> %d \n", a-=3); a = 10;
    printf("a *= 5 --> %d \n", a*=5); a = 10;
    printf("a /= 5 --> %d \n", a/=5); a = 10;

    return 0;
}