#include <stdio.h>

int main()
{
    int amount;
    scanf("%d", &amount);

    for (int i = 0; i < amount; i++) {
        for (int j = 0; j < amount; j++) {
            if (i == j || i == ((amount-1) - j)) {
                printf("-");
            }
            else {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}