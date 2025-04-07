// Name : Abhishek Parasad Verma
// ID : 202419tw027
#include <stdio.h>

int main() {
    int row, col, iden = 1; // Changed variable name to 'iden'

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    if (row != col) {
        printf("The matrix is not square, so it cannot be an identity matrix.\n");
        return 1;
    }

    int matrix[row][col];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
            if (i == j && matrix[i][j] != 1) {
                iden = 0; // Diagonal element is not 1
            } else if (i != j && matrix[i][j] != 0) {
                iden = 0; // Non-diagonal element is not 0
            }
        }
        printf("\n");
    }

    if (iden) {
        printf("The given matrix is an identity matrix.\n");
    } else {
        printf("The given matrix is not an identity matrix.\n");
    }

    return 0;
}