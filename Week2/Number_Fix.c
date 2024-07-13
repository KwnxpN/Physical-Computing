#include <stdio.h>

int main()
{
    char number[6];
    char result[6];

    scanf("%s", number);

    result[3] = number[0];
    result[4] = number[1];

    result[0] = number[2];
    result[1] = number[3];
    result[2] = number[4];
    result[5] = '\0';

    printf("%s", result);
}