#include <stdio.h>
#include <string.h>

int main()
{
    char text[101];
    char reverse[101];
    scanf("%[^\n]", text);
    int end = strlen(text) - 1;
    int start = 0;
    for (start, end; end >= 0; start++, end--) {
        reverse[start] = text[end];
    }
    reverse[start+1] = '\0';
    if (strcmp(reverse, text) == 0) {
        printf("It is Palindrome.");
    }
    else {
        printf("It is not Palindrome.");
    }
    return 0;
}