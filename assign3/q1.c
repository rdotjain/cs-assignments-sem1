#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character ");
    scanf("%c", &ch);

    // Using if-else
    if (ch >= 'A' && ch <= 'Z')
        printf("It is an uppercase alphabet");
    else if (ch >= 'a' && ch <= 'z')
        printf("It is a lowercase alphabet");
    else if (isdigit(ch))
        printf("It is a digit");
    else
        printf("It is a special character");

    // Using pre-defined functions
    if (isupper(ch))
        printf("It is an uppercase alphabet");
    else if (islower(ch))
        printf("It is a lowercase alphabet");
    else if (isdigit(ch))
        printf("It is a digit");
    else
        printf("It is a special character");
    return 0;
}
