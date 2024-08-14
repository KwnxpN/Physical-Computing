#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main()
{
    double gravity = 9.81, height, radius;
    int speed, theta;

    scanf("%d %d", &theta, &speed);
    radius = (theta * PI)/180;

    height = ((speed*speed)*(sin(radius)*sin(radius))) / (2*gravity);
    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4lf", theta, speed, height);
    return 0;
}