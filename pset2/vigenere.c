
/*
 * Author: Hao Wu <echowuhao@gmail.com>
 */
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

void caesar(char* text, char* keyword);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("please provide an int k\n");
        return 1;
    }

    char* keyword = (argv[1]);
    char* text = GetString();
    caesar(text, keyword);
    return 0;
}

void caesar(char* text, char* keyword)
{
    char current;
    int len_keyword = strlen(keyword);
    char k;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        current =  text[i];

        // find the char k 
        k = keyword[i % len_keyword];

        // get ki
        // k in the range of a..z
        if (k >= 'a') {
            k = k  - 'a';
        } else {
        // k in the range of A..Z
            k = k - 'A';
        }

        if (!isalpha(current))
        {
            printf("%c", current);
        }
        else if (current >= 'a' )
        {
            //ci = (pi + ki) % 26
            // something wrong here?            
            printf("%c", 'a' + (current - 'a' + k ) % 26);
        }
        else
        {
            printf("%c", 'A' + (current - 'A' + k) % 26);
        }
    }
    printf("\n");
}

