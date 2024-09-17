#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* text;
    text = (char*) malloc(150 * sizeof(char));
    scanf("%[^\n]", text);
    char *ptr = text;
    while (*ptr) {
        if (*ptr != ' ') {
            printf("%c", *ptr);
        }
        *ptr++;
    }
    free(text);
    return 0;
}