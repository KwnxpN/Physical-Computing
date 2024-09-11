#include "stdio.h"
#include "stdlib.h"

int main()
{
    char *text;
    int size, freq, count = 0;
    scanf("%d\n", &size);
    scanf("%d\n", &freq);
    text = (char*) malloc((size + 1) * sizeof(char));
    scanf("%[^\n]s", text);
    char *ptr = text;
    while (*ptr) {
        if (count == 0 || count == freq) {
            printf("%c", *ptr);
            count = 1;
        }
        else {
            count++;
        }
        *ptr++;
    }
    free(text);
    return 0;
}