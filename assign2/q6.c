#include <stdio.h>
int main()
{
    unsigned int a = 20;
    printf("Left-shifting 20 by 2 i.e. 20 << 2 ---> %d\n", a<<2);
    printf("Right-shifting 20 by 2 i.e. 20 >> 2 ---> %d\n", a>>2);
    return 0;
}