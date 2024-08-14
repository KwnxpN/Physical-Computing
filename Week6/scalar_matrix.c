#include <stdio.h>

char* IsScalar(double matrix[3][3])
{
    double check_scalar = matrix[0][0];
    int left = 1, right = 2;
    for (int i = 0; i < 3; i++) {
        if (i == 1) {left--;}
        if (i == 2) {right--;}
        if (matrix[i][i] != check_scalar || matrix[i][left] != 0.0 || matrix[i][right] != 0.0) {
            return "This is not a scalar matrix";
            break;
        }
    }
    return "This is a scalar matrix";
}

int main()
{
    double matrix[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf", &matrix[i][0], &matrix[i][1],&matrix[i][2]);
    }

    printf("%s", IsScalar(matrix));
    return 0;
}