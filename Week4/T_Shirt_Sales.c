#include <stdio.h>

int main()
{
    float price, percentage;
    int amount;
    scanf("%f %f %d", &price, &percentage, &amount);
    float cal_percentage = percentage/100;

    float use_percen = (price*amount) - (price*amount)*cal_percentage;
    float use_free = (((int)amount/3)*(price*2)) + ((amount%3)*price);

    if (use_percen <= use_free)
    {
        printf("Discount %.0f%%\n%.2f", percentage, use_percen);
    }
    else
    {
        printf("Buy 2 Get 1\n%.2f",use_free);
    }
    return 0;
}