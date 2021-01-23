#include <stdio.h>
int main()
{
    char c;
    printf("Enter an character\n");
    scanf("%c", &c);
    printf("You entered : %c", c);

    // OR
    char c1[1];
    printf("Enter an character\n");
    gets(c1);
    printf("You entered\n");
    puts(c1);

    return 0;
}