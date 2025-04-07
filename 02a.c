// Name : Abhishek Parasad Verma
// ID : 202419tw027
#include <stdio.h> 
int fibonacci(int n) { 
    if (n == 0) { 
        return 0; // Corrected base case for n == 0
    } else if (n == 1) { 
        return 1; // Base case for n == 1 remains correct
    } else { 
        return fibonacci(n - 1) + fibonacci(n - 2); 
    } 
} 
int main() { 
    int num = 6; 
    printf("Fibonacci number at position %d is: %d\n", num, fibonacci(num)); 
    return 0; 
}
