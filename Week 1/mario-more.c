#include <cs50.h>
#include <stdio.h>

void block(int row); // To declare the prototype

int main(void)
{
    int height;
    do // To get a valid input between the range of 1 and 8.
    {
        height = get_int("What will be the height of the pyarmids? ");
    }
    while (height < 1 || height > 8);
    for (int row = 0; row < height; row++) // To declare the number of row through which hashes and
                                           // spaces can be enamurated for each row.
    {
        for (int space = 0; space < height - row - 1;
             space++) // -1 is used for exact space that is required when row number is 0.
        {             // For a certain amount of gaps before hash in each row
            printf(" ");
        }
        block(row + 1); // Row+1 input to get the exact number of hash needed.
        printf("  ");   // To print two hash size gaps between each pyramid.
        block(row + 1); // To print pyramid again after the gap
        printf("\n");
    }
}

void block(int row)
{ // To print out certain number of bricks or hashes on each row.
    for (int hash = 0; hash < row; hash++)
    {
        printf("#");
    }
}
