#include <stdio.h>

int main()
{
    char word[101], reverse_word[101];
    scanf("%[^\n]", word);
    int i = 0, length = 0;
    while (word[i] != 0) {
        length++;
        i++;
    }
    for (int j = 0, k = length - 1; j <= length; j++, k--) {
        if (j == length) {
            reverse_word[j] = '\0';
        }
        else {
            reverse_word[j] = word[k];
        }
    }
    printf("%s", reverse_word);
    return 0;
}