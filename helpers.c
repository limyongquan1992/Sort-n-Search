/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n <= 0)
    {
        return false;
    }
    
    int a = 0;
    int b = n-1;
    int c = (a+b)/2;
    
    while (a <= b)
    {
        if (values[c] == value)
        {
            return true;
        }
        else if (values[c] < value)
        {
            a = c+1;
        }
        else if (values[c] > value)
        {
            b = c-1;
        }
        c = (a+b)/2;
    }
    
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int a = 0; a < n-1; a++)
    {
        for (int b = 0; b < n-a-1; b++)
        {
            if (values[b] > values[b+1])
            {
                int temp = values[b+1];
                values[b+1] = values[b];
                values[b] = temp;
            }
        }
    }
    
    return;
}