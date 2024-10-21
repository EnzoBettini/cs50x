#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
//get a height number beetween 1 and 8
    do
    {
        height = get_int("Height: \n");
    }

    while ((height < 1) || (height > 8));
//for for the height
    for (int row = 0; row < height; row++)
    {
//for the width
        for (int column = 0; column < height; column++)
        {

            if (row + column >= height-1)
                printf("#");
//add spaces
            else
                printf(" ");
        }
        printf("\n");
    }
}
