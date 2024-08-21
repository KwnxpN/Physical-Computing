#include "stdio.h"
#include "stdbool.h"
// Not pass
int main()
{
    int table[3][3];
    for (int i=0; i<3; i++) {
        scanf("%d %d %d\n", &table[i][0], &table[i][1], &table[i][2]);
    }
    char status;
    bool stopWhile = false;
    scanf("%c", &status);
    while (status != 'E') {
        bool stop = false;
        for (int r=0; r<3 && !stop; r++) {
            for (int c=0; c<3; c++) {
                if (table[r][c] == 0) {
                    if (status == 'L' && c != 2) {
                        table[r][c] = table[r][c+1];
                        table[r][c+1] = 0;
                        stop = true;
                        break;
                    }
                    else if (status == 'R' && c != 0) {
                        table[r][c] = table[r][c-1];
                        table[r][c-1] = 0;
                        stop = true;
                        break;
                    }
                    else if (status == 'U' && r != 2) {
                        table[r][c] = table[r+1][c];
                        table[r+1][c] = 0;
                        stop = true;
                        break;
                    }
                    else if (status == 'D' && r != 0) {
                        table[r][c] = table[r-1][c];
                        table[r-1][c] = 0;
                        stop = true;
                        break;
                    }
                    else {
                        stopWhile = true;
                        stop = true;
                        break;
                    }
                }
            }
        }
        scanf("%c", &status);
    }
    for (int p=0; p<3; p++) {
        printf("%d %d %d\n", table[p][0], table[p][1], table[p][2]);
    }
    return 0;
}
