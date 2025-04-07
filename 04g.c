// Name : Abhishek Parasad Verma
// ID : 202419tw027
//  statement8 : int arr[][3]= {1,2,3,4,5,6};  

#include<stdio.h>
void main()
{
/* write down Declaration and Initialization statement here */

int arr[][3]= {1,2,3,4,5,6};  //  statement8 : int arr[][3]= {1,2,3,4,5,6};  
int i, j;
printf ("The array contents are:\n");
for (i = 0; i < 2; i++){
printf("\n The contents of row %d : ",i);
for (j = 0; j < 3; j++)
printf("%d ", arr[i][j]);
}
}