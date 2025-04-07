// Name : Abhishek Parasad Verma
// ID : 202419tw027
#include <stdio.h>

void my_fun(int arr[], int size);
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
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

