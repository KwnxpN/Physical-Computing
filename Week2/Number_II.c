#include <stdio.h>

int main()
{
    char number[6];

    scanf("%s", number);

    printf("%-80.1s", number);
    printf("%*s%.2s%*s", 1, "", number, 77, "");
    printf("%*s%.3s%*s", 2, "", number, 75, "");
    printf("%*s%.4s%*s", 3, "", number, 73, "");
    printf("%*s%.5s%*s", 4, "", number, 71, "");
    return 0;
}