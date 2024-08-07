#include <stdio.h>

int main()
{
    char alphaUpper[26] = {'I', 'W', 'G', 'Z', 'V', 'F', 'U',
    'T', 'H', 'S', 'O', 'J', 'L', 'K', 'D', 'E', 'C', 'N', 'M',
    'R', 'Q', 'P', 'Y', 'X', 'B', 'A'};
    char alphaLower[26] = {'i', 'w', 'g', 'z', 'v', 'f', 'u',
    't', 'h', 's', 'o', 'j', 'l', 'k', 'd', 'e', 'c', 'n', 'm',
    'r', 'q', 'p', 'y', 'x', 'b', 'a'};
    char text[201];

    scanf("%[^\n]", text);

    int i = 0;
    while (text[i] != '\0') {
        // isUpper
        if ((int)text[i] >= 65 && (int)text[i] <= 90) {
            for (int u = 0; u < 26; u++) {
                if (alphaUpper[u] == text[i]) {
                    if (u + 5 >= 26) {
                        text[i] = alphaUpper[(u+5) - 26];
                        break;
                    }
                    else {
                        text[i] = alphaUpper[u+5];
                        break;
                    }
                }
            }
        }
        // isLower
        else if ((int)text[i] >= 97 && (int)text[i] <= 122) {
            for (int l = 0; l < 26; l++) {
                if (alphaLower[l] == text[i]) {
                    if (l + 5 >= 26) {
                        text[i] = alphaLower[(l+5) - 26];
                        break;
                    }
                    else {
                        text[i] = alphaLower[l+5];
                        break;
                    }
                }
            }
        }
        i++;
    }
    printf("%s", text);
    return 0;
}