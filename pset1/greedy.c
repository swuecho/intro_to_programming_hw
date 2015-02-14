/*
 * Author: Hao Wu <echowuhao@gmail.com>
 */
#include <stdio.h>
#include <math.h>
#include <cs50.h>
// function prototype

int change(int);

int main(void)
{

    float input;

    printf("O hai! ");
    // while in put is valid
    do
    {
        printf("How much change is owed?\n");
        input = GetFloat();
        int coins = change((int) round(100 * input));
        printf("%d\n", coins);
    }
    while (input < 0 ); 


}

// print the pyramid
// Assume that the only coins available are
// quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).
int change(int cents)
{
    int quarter = 25;
    int dime    = 10;
    int nickel = 5;
    int coins = 0;

    while ( cents >= quarter )
    {
        cents = cents - quarter;
        coins++;
    }
    while ( cents >= dime )
    {
        cents = cents - dime;
        coins++;
    }
    while ( cents >= nickel )
    {
        cents = cents - nickel;
        coins++;
    }
    // if any cents left
    return coins + cents;
}
