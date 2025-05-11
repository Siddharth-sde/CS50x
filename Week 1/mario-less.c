#include <cs50.h>
#include <stdio.h>

int positive(void); // mentioning of prototype

int main(void)
{
    int height = positive(); // To receive the correct input provided by the user.
    for (int row = 1; row <= height;
         row++) // To declare how many hashes and spaces are required within each row.
    {
        for (int space = 0; space < height - row; space++)
        { // To print height-row amount of spaces each time before hash.
            printf(" ");
        }
        for (int hash = 0; hash < row; hash++)
        { // To print certain amount of hashes in each row.
            printf("#");
        }
        printf("\n");
    }
}

int positive(void)
{ // To prompt user repeatedly until a number between 1 and 8 has been input.
    int height;
    do
    {
        height = get_int("What's the height of the pyarmid? ");
    }
    while (height < 1 || height > 8);
    return height;
}
