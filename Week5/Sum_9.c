#include <stdio.h>

int main()
{
    int number, summary;
    scanf("%d", &number);

    while (number != -9)
    {
        summary += number;
        scanf("%d", &number);
    }
    printf("%d", summary);
    return 0;
}