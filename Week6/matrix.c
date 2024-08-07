#include <stdio.h>

int main()
{
    double matrix1[3][3];
    double matrix2[3][3];
    double result[3][3];
    double sum;
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
    }
    for (int j = 0; j < 3; j++) {
        scanf("%lf %lf %lf", &matrix2[j][0], &matrix2[j][1], &matrix2[j][2]);
    }
    for (int rows = 0; rows < 3; rows++) {
        for (int col = 0; col < 3; col++) {
            for (int k = 0; k < 3; k++) {
                result[rows][col] += matrix1[rows][k] * matrix2[k][col];
            }
        }
    }
    printf("A x B\n");
    printf("%.2lf %.2lf %.2lf\n", result[0][0], result[0][1], result[0][2]);
    printf("%.2lf %.2lf %.2lf\n", result[1][0], result[1][1], result[1][2]);
    printf("%.2lf %.2lf %.2lf", result[2][0], result[2][1], result[2][2]);
    return 0;
}