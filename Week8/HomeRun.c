#include "stdio.h"

int main()
{
    int amount, count = 0;
    double hit_range, stadium_range;
    scanf("%d\n%lf", &amount, &hit_range);
    for (int i=0; i<amount; i++) {
        scanf("%lf", &stadium_range);
        if (hit_range > stadium_range) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}