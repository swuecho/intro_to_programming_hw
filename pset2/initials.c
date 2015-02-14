
/*
 * Author: Hao Wu <echowuhao@gmail.com>
 */
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    char* name = GetString();

    for (int i = 0; name[i] != 0; i++)
    {
        if ( i == 0 || name[i - 1] == 32)
        {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");

}
