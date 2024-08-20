#include <stdio.h>

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double farenheit);
void printFahrenheit(double farenheit);
void printCelsius(double celsius);

int main()
{
    double tempe;
    char unit;
    scanf("%lf %c", &tempe, &unit);
    if (unit == 'c' || unit == 'C') {
        tempe = celsiusToFahrenheit(tempe);
        printFahrenheit(tempe);
    }
    else {
        tempe = fahrenheitToCelsius(tempe);
        printCelsius(tempe);
    }
    return 0;
}

double celsiusToFahrenheit(double celsius) {
    return 32 + celsius * (180.0/100.0);
}

double fahrenheitToCelsius(double farenheit) {
    return (100.0/180.0) * (farenheit - 32);
}

void printFahrenheit(double farenheit) {
    printf("%.2lf f", farenheit);
}

void printCelsius(double celsius) {
    printf("%.2lf c", celsius);
}