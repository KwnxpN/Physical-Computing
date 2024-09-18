#include "stdio.h"
#include "stdlib.h"

int main() {
    char find;
    char* text;
    int count = 0;
    text = (char*) malloc(151 * sizeof(char));
    scanf("%c\n", &find);
    scanf("%[^\n]", text);
    char *ptr = text;
    while (*ptr) {
        if (*ptr == find || *ptr == (find - 32) || *ptr == (find + 32)) {
            count++;
        }
        *ptr++;
    }
    printf("%d", count);
    free(text);

    return 0;
}