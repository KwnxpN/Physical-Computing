#include <stdio.h>

int main()
{
    char number[6];
    char result[6];

    scanf("%s", number);

    for (int i = 0; i < 5; i++) {
        if (i == 0 || i == 1) {
            result[i + 3] = number[i];
        }
        else {
            result[i - 2] = number[i];
        }
    }
    printf("%s", result);
    return 0;
}