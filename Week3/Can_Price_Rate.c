#include <stdio.h>

int main()
{
    double price; double diameter; double height;
    double pi = 3.14159265359;
    double volumn; double radius;
    scanf("%lf %lf %lf", &price, &diameter, &height);
    radius = diameter / 2;
    volumn = (height * pi  * (radius*radius));
    price = price / volumn;
    printf("Volume : %.2lfml\n", volumn);
    printf("Baht/ml : %.4lf", price);
    return 0;
}