// Name : Abhishek Parasad Verma
// ID : 202419tw027
#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
    {
        return 1; // Corrected base case to return 1
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));
    return 0;
}