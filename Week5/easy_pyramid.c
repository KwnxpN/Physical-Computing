#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int start = num, end = num;

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= end; j++){
            if (j >= start && j <= end) {
                printf("*");
            }   
            else {
                printf(" ");
            }
        }
        start -= 1;
        end += 1;
        printf("\n");
    }
    return 0;
}