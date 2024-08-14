#include <stdio.h>
#include <string.h>


int main()
{
    char name_1[102];
    char name_2[102];
    scanf("%[^\n]\n", name_1);
    scanf("%[^\n]", name_2);

    for (int i = 0; i < 101; i++) {
        char ch = name_1[i];
        if (ch == '\0') {
            break;
        }
        if (ch >= 65 && ch <= 90) {
            // Uppercase
            name_1[i] = ch + 32;
        }
        else if (ch >= 97 && ch <= 122) {
            // Lowercase
            name_1[i] = ch - 32;
        }
    }

    for (int i = 0; i < 101; i++) {
        char ch = name_2[i];
        if (ch == '\0') {
            break;
        }
        if (ch >= 65 && ch <= 90) {
            // Uppercase
            name_2[i] = ch + 32;
        }
        else if (ch >= 97 && ch <= 122) {
            // Lowercase
            name_2[i] = ch - 32;
        }
    }

    printf("*** Results ***\n");
    printf("%s\n%s\n", name_1, name_2);
    printf("***************\n");

    for (int i = 0; i < 101; i++) {
        char ch = name_1[i];
        if (ch == '\0') {
            break;
        }
        if (ch >= 65 && ch <= 90) {
            // Uppercase
            name_1[i] = ch + 32;
        }
    }

    for (int i = 0; i < 101; i++) {
        char ch = name_2[i];
        if (ch == '\0') {
            break;
        }
        if (ch >= 65 && ch <= 90) {
            // Uppercase
            name_2[i] = ch + 32;
        }
    }

    if (strcmp(name_1, name_2) == 0) {
        printf("Both strings are the same.");
    }
    else {
        printf("Both strings are not the same.");
    }
    return 0;
}