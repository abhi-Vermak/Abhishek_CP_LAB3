// Name : Abhishek Parasad Verma
// ID : 202419tw027
#include <stdio.h>
void main()
{

int arr[2][];  //statement3: int arr[2][]; 
int i, j;
printf("Key in the array contents:\n");
for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
        scanf("%d", &arr[i][j]);
printf("The array contents are:\n");
for (i = 0; i < 2; i++)
{
    printf("\n The contents of row%d :  ", i);
    for (j = 0; j < 3; j++)
        printf("%d   ", arr[i][j]);
}
}