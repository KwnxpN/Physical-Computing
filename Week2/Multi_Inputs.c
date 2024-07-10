#include <stdio.h>

int main()
{
    char text1[31];
    char text2[31];
    char text3[31];
    char text4[31];

    scanf("%s %s %s %s", text1, text2, text3, text4);
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", text1, text2, text3, text4);
    return 0;
}