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
        sum += matrix[i][i];
    }

    printf("Sum of left diagonal is %d\n", sum);

    return 0;
}

