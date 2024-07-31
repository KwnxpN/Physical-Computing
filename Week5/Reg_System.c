#include <stdio.h>

int main()
{
    int ages, height, weight;
    int cond1 = 0, cond2 = 0, cond3 = 0, cond4 = 0;
    int avg_ages;
    float avg_hei, avg_wei;

    for (int i = 0; i < 50; i++)
    {
        scanf("%d %d %d", &ages, &height, &weight);
        if (ages >= 20 && height >= 160) {
            cond1 += 1;
        }
        if ((ages < 20 && height <= 180) || (ages < 20 && weight >= 60)) {
            cond2 += 1;
        }
        if (ages >= 30 && weight >= 40 && weight <= 80) {
            cond3 += 1;
        }
        if ((ages < 40 && weight < 85) || (ages < 40 && height <= 200)) {
            cond4 += 1;
        }
        avg_ages += ages;
        avg_hei += height;
        avg_wei += weight;
    }

    avg_ages = (int)avg_ages/50;
    avg_hei = avg_hei / 50;
    avg_wei = avg_wei / 50;

    printf("Age >= 20 and Height >= 160: %d\n", cond1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", cond2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", cond3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", cond4);
    printf("Average Age: %d\nAverage Height: %.2f\nAverage Weight: %.2f", avg_ages, avg_hei, avg_wei);
    return 0;
}