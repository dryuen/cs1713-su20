#include <stdio.h>
#include "functions.h"

int main( int argc, char* argv[] )
{
    /*
        Declare two variables, initialize to any values.
        Call Function 2
    */

    int x = 10, y = 20;
    printf( "Before: %d %d\n", x, y );
    
    reorder( &x, &y );

    printf( "After %d %d\n", x, y );
    return 0;
}

