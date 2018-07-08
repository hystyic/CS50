//greedy.c by Neil Fernandes

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float money;
    int cents, coins = 0;
    do
    {
        printf("How much money is given?\n"); // ask user for how much change is to be given
        money = get_float();
    }
    while (money < 0); // check that the given value is not negative
    cents = round(money * 100); // convert dollars in cents
    while (cents >= 25) // check for quarters
    {
        cents = cents - 25;
        coins++;
    }
    while (cents >= 10) //check for dimes
    {
        cents = cents - 10;
        coins++;
    }
    while (cents >= 5) //check for nickels
    {
        cents = cents - 5;
        coins++;
    }
    while (cents >= 1) //check for pennies
    {
        cents = cents - 1;
        coins++;
    }
    printf("%i\n", coins); //prints the amount of coins to be given
}


/* Mechanism:
ask user for how much change is to be given
check that the given value is not negative
convert dollars in cents
check if cent value is equal or greater than 25 and deduct 25 cents from the original value while increasing the coin count
check if cent value is equal or greater than 10 and deduct 10 cents from the original value while increasing the coin count
check if cent value is equal or greater than 5 and deduct 5 cents from the original value while increasing the coin count
check if cent value is equal or greater than 1 and deduct 1 cents from the original value while increasing the coin count
prints the amount of coins to be given */