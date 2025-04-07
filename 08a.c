// Name : Abhishek Parasad Verma
// ID : 202419tw027

#include <stdio.h>

void my_fun(int arr[], int size);
int main()
{
    int array[5];
    // Input 5 integers from the user
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    my_fun(array, 5);
    return 0;
}

void my_fun(int myarray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myarray[i]);
    }
}

