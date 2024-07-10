#include <stdio.h>

int main()
{
    char character;
    for (int i = 1; i <= 5; i++) {
        scanf(" %c", &character);
        if (i == 1 || i == 3 || i == 5) {
            printf("%c\n", character + 1);
        } else {
            printf("%c\n", character);
        }
    }
    return 0;
}