#include <stdio.h>
#include <math.h>

int main()
{
    double a_side;
    double b_side;
    double c_side;
    scanf("%lf %lf", &a_side, &b_side);
    c_side = pow(a_side, 2) + pow(b_side, 2);
    c_side = sqrt(c_side);
    printf("%.2lf", c_side);
    return 0;
}