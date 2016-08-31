#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;


float amount_given = 0;
int cents = 0;
int quarters_amount = 0;
int dimes_amount = 0;
int nickels_amount = 0;
int leftover = 0;
int leftover1 = 0;
int leftover2 = 0;
int total_amount = 0;


int main(void)
{
    do
    {
        printf("give me a dollar amount: ");
         amount_given = GetFloat();
        
    }
        while( amount_given <= 0 || amount_given == 0);
        // gets user input and validates that it is a positive 
        
        cents = (int)round(amount_given*100);
        // converts user float into int 
        // rounds int in order to avoid miscalculation by truncating
        quarters_amount = cents / QUARTER;
        leftover = cents % QUARTER;
        // takes input divides and stores result for later sum
        // stores leftover by using modulo operater for further division
        // repeats process for nickels and dimes
        
        dimes_amount = leftover / DIME;
        leftover1 = leftover % DIME;
        
        nickels_amount = leftover1 / NICKEL;
        leftover2 = leftover1 % NICKEL;
        
        total_amount = (quarters_amount + dimes_amount + nickels_amount + leftover2);
        printf("%d\n", total_amount);
        // adds nickels, quarters, dimes, and pennies amount to calculate total
        // prints result
        return 0;
        
    
}