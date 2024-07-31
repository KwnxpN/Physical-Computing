#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num >= 0)
    {
        for (num; num >= 0; num--) {
            printf("%d ", num);
        }
    }
    else
    {
        for (num; num <= 0; num++) {
            printf("%d ", num);
        }
    }
    return 0;
}