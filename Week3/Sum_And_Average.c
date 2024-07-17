#include <stdio.h>

int main()
{
    float ingre1; float ingre2; float ingre3; float ingre4;
    float sum; float avg;
    scanf("%f %f %f %f", &ingre1, &ingre2, &ingre3, &ingre4);
    sum = ingre1 + ingre2 + ingre3 + ingre4;
    avg = sum/4;
    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f", avg);
    return 0;
}