// Name : Abhishek Parasad Verma
// ID : 202419tw027
#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int a[row][col], b[row][col], c[row][col];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}