/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"
#define LIMIT 65536

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        if (values[i] == value)
        {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 * selection sort
 */
void sort(int values[], int n)
{
    size_t min_idx;
    int temp;
    for (int i = 0; i < n ; i++) {
        int min = values[i];
        for (int j = i + 1; j < n; j++) {
           if ( values[j]  < min) {
                min = values[j];
                min_idx = j ;
           }
        }
     temp = values[i];
     values[i] = values[min_idx];
     values[min_idx] = temp;
    }
    return;
}
