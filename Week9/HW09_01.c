#include "stdio.h"
#include "stdlib.h"

int main()
{
    char *text;
    int lower = 0, upper = 0, digit = 0;
    text = (char*) malloc(101 * sizeof(char));

    scanf("%[^\n]s", text);
    char *ptr = text;
    while (*ptr) {
        if (*ptr >= 65 && *ptr <= 90) {
            upper++;
        }
        else if (*ptr >= 97 && *ptr <= 122) {
            lower++;
        }
        else if (*ptr >= 48 && *ptr <= 57) {
            digit++;
        }
        *ptr++;
    }
    printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d", lower, upper, digit);
    free(text);
    return 0;
}