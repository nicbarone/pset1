#include <cs50.h>
#include <stdio.h>
int main(void)
{
    printf("mintues: ");
    int n = GetInt();
    // gets user input in minutes
    
    int results = n * 12;
    // multiplies minutes byu 12 bottles to caculate result
    printf("bottles: %i\n", results);
    // prints resulting number of bottles
}