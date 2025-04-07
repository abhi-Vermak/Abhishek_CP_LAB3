// Name : Abhishek Parasad Verma
// ID : 202419tw027
#include <stdio.h>

int main() {
    int rowa, cola, rowb, colb;

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowa, &cola);

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowb, &colb);

    if (cola != rowb) {
        printf("Incorrect matrix dimensions for multiplication.\n");
        return 1;
    }

    int a[rowa][cola], b[rowb][colb], c[rowa][colb];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowa; i++) {
        for (int j = 0; j < cola; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowb; i++) {
        for (int j = 0; j < colb; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rowa; i++) {
        for (int j = 0; j < colb; j++) {
            c[i][j] = 0;
            for (int k = 0; k < cola; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < rowa; i++) {
        for (int j = 0; j < colb; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}