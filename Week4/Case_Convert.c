#include <stdio.h>

int main()
{
    char alpha;
    scanf("%c", &alpha);
    int ascii = (int)alpha;

    if (ascii >= 65 && ascii <= 90)
    {
        printf("%c", alpha + 32);
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        printf("%c", alpha - 32);
    }
    else
    {
        printf("error");
    }
    return 0;
}