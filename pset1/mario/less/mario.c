// print a mario pyramid based on user input
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, space, bricks;
    do      //ask for user input with the range of 0-23 until the desire input is given.
    {
        printf("Enter a number from 0 to 23\n");
        height = get_int();
    }

    while (height < 0 || height > 23);

    for (row = 0; row < height; row++) // loop to iterate over rows
    {
        for (space = row; space < height - 1; space++) //loop to insert space
        {
            printf(" ");
        }
        for (bricks = 0; bricks < row + 2; bricks++) //loop to insert bricks
        {
            printf("#");
        }
        printf("\n");
    }

}

/*

Mechanism

The do function asks the user for a number
The while function checks if the height is less than 0 or greater than 23, if so, it reprompts the user
A for loop is setup to go over rows.
Inside the for loop, another for loop is setup to insert spaces
Space is equalized to row with the condition that if space is lower than height-1, it'll increment
Ex: h=4
    r=0 r<5 r=1
    s=1 s=3 s+2
The reason height is -1 is because the count starts from 0. So if 4 is entered, it'll count as 0-4, which is 5 spaces. So as the
count increases it'll turn 4, 3, 2, 1. But as per the specification, the last row should have any space, so the -1 is gven to
remove that last space(1). So now if the input is given as it'll start as 3, 2, 1 & 0. So no spaces.
Another for loop is setup to insert hashes.
bricks is equalized to 0 with the condition that bricks < rows+2 and then it's incremented by 1
The reason row+2 is used is because the pyramid should start with 2 bricks, so subsequently as row increments by 1, it's added to
2. So at row=0 it's just 0+2, so 2 bricks. when row=1, it becomes 1+2, so 3 bricks are put.
*/