#include <stdio.h>

int sumTriangle(int height, int diag) {
    int matrix[height][height];
    int sum = 0;

    // Preenchendo o Triângulo de Pascal
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
            }

            // Verificando se estamos na diagonal desejada
            if (i - j == diag) {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main() {
    int height = 5;
    int diag = 2;
    printf("Soma da diagonal %d: %d\n", diag, sumTriangle(height, diag));
    return 0;
}
