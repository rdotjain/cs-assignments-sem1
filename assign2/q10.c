#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // Demonstrating type casting functions
    char s[] = "12";
    printf("using atof() --> %f\n", atof(s));
    printf("using atoi() --> %d\n", atoi(s));
    printf("using atol() --> %ld\n", atol(s));

    return 0;
}