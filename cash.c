#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // variable declaration
    int change, q, d, n, c, rest;
    do
    {
        change = get_int("Change owed: \n");
    }
    while (change < 0);

    // change calculator
    q = change / 25;
    change = change % 25;

    d = change / 10;
    change = change % 10;

    n = change / 5;
    change = change % 5;

    c = change;
    // calculating the amount of coins needed
    rest = q + d + n + c;
    // print the amount of coins needed
    printf("%d\n", rest);
}
