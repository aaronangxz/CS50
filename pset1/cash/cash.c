#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars = 0;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0, totalcoins = 0;

    //Make sure input is positive
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);

    //Covert dollars to cents and round up
    int cents = round(dollars * 100);

    //Compute numbers of quarters
    quarters = cents / 25;
    //If results is 0
    if (quarters <= 0)
    {
        quarters = 0;
    }
    else
    {
        totalcoins = totalcoins + quarters; //Record number of coins so far
        cents = cents % 25; //Continue calculations with the remainder
    }

    //Compute numbers of dimes
    dimes = cents / 10;
    if (dimes <= 0)
    {
        dimes = 0;
    }
    else
    {
        totalcoins = totalcoins + dimes;
        cents = cents % 10;
    }

    //Compute numbers of nickels
    nickels = cents / 5;
    if (nickels <= 0)
    {
        nickels = 0;
    }
    else
    {
        totalcoins = totalcoins + nickels;
        cents = cents % 5;
    }

    //Compute numbers of pennies
    pennies = cents / 1;
    if (pennies <= 0)
    {
        pennies = 0;
    }
    else
    {
        totalcoins = totalcoins + pennies;
        cents = cents % 1;
    }

    //printf("%i,%i,%i,%i,%i,%i",quarters,dimes,nickels,pennies,totalcoins,cents);
    printf("%i\n", totalcoins);

}