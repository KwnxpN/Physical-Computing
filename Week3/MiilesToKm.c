#include <stdio.h>

int main()
{
    float mileToKm = 1.60934;
    float getMiles;

    scanf("%f", &getMiles);
    printf("%.2f", getMiles * mileToKm);
    return 0;
}