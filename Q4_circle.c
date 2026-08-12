#include <stdio.h>
int main()
{
    float radius, area, circumference;
    const float pi = 3.14;
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("Area of circle is: %.2f\n", area);
    printf("circumference of circle is: %.2f\n", circumference);
    return 0;
}