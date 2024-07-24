#include <stdio.h>
#include "ctype.h"

int main()
{
    char character;
    scanf("%c", &character);

    if (isdigit(character))
    {
        printf("number");
    }
    else if (isupper(character))
    {
        printf("uppercase");
    }
    else if (islower(character))
    {
        printf("lowercase");
    }
    else
    {
        printf("error");
    }
    return 0;
}