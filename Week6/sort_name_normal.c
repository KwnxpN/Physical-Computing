#include "stdio.h"

int findLength(char *name);

int main()
{
    char name_list[20][61];
    int length;
    for (int i=0; i<20; i++) {
        scanf(" %[^\n]", name_list[i]);
    }
    for (int j=0; j<20; j++) {
        // not finished
    }
    return 0;
}

int findLength(char *name) {
    int length = 0;
    while (name[length] != '\0') {
        length++;
    }
    return length;
}