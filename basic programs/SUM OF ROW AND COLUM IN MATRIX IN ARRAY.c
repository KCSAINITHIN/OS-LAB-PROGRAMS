#include<stdio.h>

int main() {
    int m, n;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < m && i < n; i++) {
            for (int j = 0; j < m && j < n; j++) {
        sum += matrix[i][j];
    }
    }
    printf("Sum of row and column elements is %d\n", sum);

    return 0;
}
