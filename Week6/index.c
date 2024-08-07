#include <stdio.h>

int main()
{
    int M[8] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[7] = {1, 3, 9, 7, 11, 15, 19};
    int num;
    do {
        scanf("%d", &num);
    }
    while (num < 1 || num > 20);

    for (int i = 0; i < 8; i++) {
        if (i == 7) {
            if (M[i] == num) {
                printf("%d is in M at index [%d]", num, i);
                break;
            }
            else {
                printf("%d is not in neither M nor N", num);
            }
        }
        else {
            if (M[i] == num) {
                printf("%d is in M at index [%d]", num, i);
                break;
            }
            if (N[i] == num) {
                printf("%d is in N at index [%d]", num, i);
                break;
            }
        }
    }   
    return 0;
}