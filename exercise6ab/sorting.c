#include <stdio.h>
#include "sort.h"

int main( int argc, char* argv[] )
{
    int a[ MAX ] = { 5, 2, 0, 9, 3, 7, 8, 1, 4, 6 };
    printArray( a, MAX );
    insertionSort( a, MAX );
    printArray( a, MAX );
    return 0;
}
