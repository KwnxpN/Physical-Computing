#include <stdio.h>
#include <math.h>

double find_perimeter(double a, double b);
double find_area(double a, double b);

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Perimeter: %.2lf\nArea: %.2lf", find_perimeter(a, b), find_area(a, b));
    return 0;
}

double find_perimeter(double a, double b) {
    double c;
    c = sqrt((a*a) + (b*b));
    return a+b+c;
}

double find_area(double a, double b) {
    return 0.5*(a*b);
}