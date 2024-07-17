#include <stdio.h>

int main()
{
    double shirt_price; double sales; double shirts_amount;
    double discount; double sum_price;

    scanf("%lf %lf %lf", &shirt_price, &sales, &shirts_amount);
    sales = sales / 100;
    discount = shirt_price * sales;
    shirt_price = shirt_price - discount;
    sum_price = shirt_price * shirts_amount;

    printf("%.2lf", sum_price);
    return 0;
}