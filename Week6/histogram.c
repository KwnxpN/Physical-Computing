#include <stdio.h>

int main()
{
    int num, amount = 0, count_alpha[27];
    char alpha, have_alpha[27];

    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        scanf(" %c", &alpha);
        if (alpha >= 65 && alpha <= 90){alpha+=32;}

        for (int j = 0; j < 27; j++) {
            if (have_alpha[j] != alpha && (have_alpha[j] < 'a' || have_alpha[j] > 'z')){
                have_alpha[j] = alpha;
                count_alpha[j] = 1;
                amount++;
                break;
            }
            else if (have_alpha[j] == alpha) {
                count_alpha[j]++;
                break;
            }
        }
    }

    for (int k = 0; k < amount; k++) {
        printf("%c: %d\n", have_alpha[k], count_alpha[k]);
    }
    return 0;
}