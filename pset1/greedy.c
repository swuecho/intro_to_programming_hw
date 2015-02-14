/*
 * Author: Hao Wu <echowuhao@gmail.com>
 */
#include <stdio.h>
#include <cs50.h>
// function prototype

void change(int);

int main(void)
{
    
    float input;
    float cents;
    printf("O hai! ");
    do
    {
        printf("How much change is owed?");
        input = GetFloat();
        if (input) {
            cents = 100 * input;
            change(int(cents));
        }
        
    }
    while (true);


}

// print the pyramid
void change(int cents)
{

        printf("%d", cents);
        printf("\n");

}
