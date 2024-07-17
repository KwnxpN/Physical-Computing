#include <stdio.h>

int main()
{
    float height; float weight; float result;
    scanf("%f %f", &height, &weight);

    height = height / 100;
    result = weight / (height * height);
    printf("%f", result);
    return 0;
}