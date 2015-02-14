/*
 * Author: Hao Wu <echowuhao@gmail.com>
 */
#include <stdio.h>
#include <cs50.h>
// function prototype

void pyramid(int);

int main(void)
{
    int input;

    do
    {
        printf("Height: ");
        input = GetInt();
    }
    while ( input < 0 || input > 23);

    pyramid(input);

}

// print the pyramid
void pyramid(int height)
{

    for (int i = 0; i < height; i++)
    {
        // ## height -(i+1)     i+2 #  total = height + 1
        for (int space = 0; space < height - (i + 1); space++)
        {
            printf(" ");
        }
        for (int stash = 0; stash <= i + 1; stash++)
        {
            printf("#");
        }

        printf("\n");

    }
}
