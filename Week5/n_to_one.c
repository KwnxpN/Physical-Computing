#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (num; num >= 1; num--) {
        printf("%d ", num);
    }
    return 0;
}