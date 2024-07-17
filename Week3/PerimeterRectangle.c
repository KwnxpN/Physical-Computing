#include <stdio.h>

int main()
{
    double short_side; double long_side;
    scanf("%lf %lf", &short_side, &long_side);
    printf("Perimeter of rectangle = %.4lf units", (short_side*2) + (long_side*2));
    return 0;
}