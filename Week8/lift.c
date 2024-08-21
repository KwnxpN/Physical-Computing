#include "stdio.h"
#include "stdbool.h"

int main()
{
    int people, age;
    double maximum_w = 0, weight, sum_w = 0;
    
    scanf("%d\n%lf", &people, &maximum_w);
    bool adult = false, tooHeavy = false;
    for (int i=0; i<people; i++) {
        scanf("%d\n%lf", &age, &weight);
        sum_w += weight;
        if (age >= 12 && adult == false) {
            adult = true;
        }
    }
    if (sum_w > maximum_w) {
        tooHeavy = true;
    }
    if ((people == 0) || ((!tooHeavy) && adult)) {
        printf("Safe");
    }
    else {
        printf("Not Safe");
    }
    return 0;
}