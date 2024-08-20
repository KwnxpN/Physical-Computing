#include <stdio.h>
#include <string.h>

int main()
{
    char text[301], to_find;
    int count = 0, pos[100], pos_index = 0;
    scanf("%[^\n]\n%c", text, &to_find);
    int length = strlen(text);
    if (to_find < 97) {
        to_find += 32;
    }
    for (int i = 0; i < length; i++) {
        if (text[i] < 97) {
            text[i] += 32;
        }
        if (text[i] == to_find) {
            count++;
            pos[pos_index] = i + 1;
            pos_index++;
        }
    }
    if (count == 0) {
        printf("Not found.");
    }
    else {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, to_find);
        printf("Position: ");
        for (int j = 0; j < pos_index; j++) {
            if (j == pos_index - 1) {
                printf("%d", pos[j]);
            }
            else {
                printf("%d, ", pos[j]);
            }
        }
    }
}