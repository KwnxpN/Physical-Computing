#include "stdio.h"
#include "string.h"

void sort(char *text);

int main() {
    char text[201];
    scanf("%[^\n]", text);
    sort(text);
    printf("%s", text);
    return 0;
}

void sort(char *text) {
    int length = strlen(text);

    for (int i = 0; i < length-1; i++) {
        int min_idx = i;

        for (int j = i+1; j < length; j++) {
            if (*(text+j) < *(text+min_idx)) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            char temp = *(text + i);
            *(text + i) = *(text + min_idx);
            *(text + min_idx) = temp;
        }
    }
}