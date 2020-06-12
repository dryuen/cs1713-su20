#include "functions.h"

/* put all function definitions here */

void reorder( int* a, int* b )
{
    int temp;
    if( *a < *b )
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}






