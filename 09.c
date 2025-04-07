// Name : Abhishek Parasad Verma
// ID : 202419tw027
// Program to find the words in a string
#include <stdio.h>
#include <string.h>

void main ()
{
    char str[100];
    int i, count = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin); // Read input

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ') // Check for space and next character is not space
            count++;
    }
    
    printf("Number of words in the string: %d\n", count + 1); // Add 1 for the last word

}