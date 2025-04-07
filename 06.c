// Name : Abhishek Parasad Verma
// ID : 202419tw027

#include <stdio.h>
void main()
{

int number[][2];; // statement1: int number[][2];
int i, j;
printf("Key in the array contents:\n");
for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
        scanf("%d", &number[i][j]);
printf("The array contents are:\n");
for (i = 0; i < 2; i++)
{
    printf("\n The contents of row%d :  ", i);
    for (j = 0; j < 3; j++)
        printf("%d   ", number[i][j]);
}
}