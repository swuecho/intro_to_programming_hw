/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>

#include "helpers.h"
#define LIMIT 65536
bool binary_search(int value, int values[], int start, int end);

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    return binary_search(value, values, 0, n - 1);
    return false;
}

bool binary_search(int value, int values[], int start, int end)
{
    // the 0 situation
    printf("start: %d, end %d\n", start, end);
    int mid_index = (int) (end + start) / 2;
    if (start > end ) {
        return false;
    }

    if ( value == values[mid_index] ) {
        return true;
    }
    else if ( value < values[mid_index] )
    {
        return binary_search(value, values, start, mid_index - 1);
    }
    else
    {
        return binary_search(value, values, mid_index + 1, end);
    }

}

/**
 * Sorts array of n values.
 * selection sort
 */
void sort(int values[], int n)
{
    size_t min_idx;
    int temp;

    for (int i = 0; i < n; i++)
    {
        int min = values[i];
        for (int j = i + 1; j < n; j++)
        {
            if ( values[j]  < min)
            {
                min = values[j];
                min_idx = j;
            }
        }
        temp = values[i];
        values[i] = values[min_idx];
        values[min_idx] = temp;
    }
    return;
}
