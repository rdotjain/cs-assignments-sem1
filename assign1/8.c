#include<stdio.h>
int main(){
    float radius, area;
    printf("Please enter your desired radius of the circle: ");
    scanf("%f", &radius);
    printf("\n");
    area = 3.14 * radius * radius;
    printf("The area of the circle of radius %.1f units is: %.2f ",radius,area);

    return 0;
}
