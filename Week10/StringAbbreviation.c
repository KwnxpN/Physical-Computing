#include "stdio.h"
#include "stdlib.h"

int main() {
    char* text;
    text = (char*) malloc(201 * sizeof(char));
    scanf("%[^\n]", text);
    char *ptr = text;
    printf("%c.", *ptr);
    while (*ptr) {
        char prev = *ptr++;
        if (prev == ' ') {
            printf("%c.", *ptr);
            break;
        }
    }
    free(text);
    return 0;
}