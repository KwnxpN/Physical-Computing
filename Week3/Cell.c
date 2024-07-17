#include <stdio.h>

int main()
{
    char text[4];
    scanf("%s", text);

    printf("*****\n*-*-*\n");
    printf("*%s*\n", text);
    printf("*-*-*\n*****");
    return 0;
}