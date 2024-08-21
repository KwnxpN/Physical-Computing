#include "stdio.h"
#include "stdlib.h"
// Not pass 1 testcase
int main()
{
    int n, a, b, c, d, e, f, g;
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", &n, &a, &b, &c, &d, &e, &f, &g);

    if (g > n || f > n || f < 1) {
        printf("Error");
    }
    else if (abs(f - g) <= a) {
        printf("%d", b);
    }
    else if (abs((f-g))-a <= c) {
        printf("%d", ((abs((f-g))-a)*d) + b);
    }
    else if (abs((f-g))-a > c) {
        printf("%d", (c*d) + (((abs(f-g)-(a+c))*e) + b));
    }
    return 0;
}