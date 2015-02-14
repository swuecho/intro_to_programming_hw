
/*
 * Author: Hao Wu <echowuhao@gmail.com>
 */
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

void caesar(char* text, int k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("please provide an int k\n");
        return 1;
    }

    int k = atoi(argv[1]);
    char* text = GetString();
    caesar(text, k);
    return 0;
}

void caesar(char* text, int k)
{
    char current;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        current =  text[i];
        if (!isalpha(current))
        {
            printf("%c", current);
        }
        else if (current >= 'a')
        {
            //ci = (pi + k) % 26
            printf("%c", 'a' + (current - 'a' + k) % 26);
        }
        else
        {
            printf("%c", 'A' + (current - 'A' + k) % 26);
        }
    }
    printf("\n");
}

