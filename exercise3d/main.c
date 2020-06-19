#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main( int argc, char* argv[] )
{
    int size;
    Character* arr;

    printf( "How many characters do you want? " );
    scanf( "%d", &size );

    arr = (Character*) malloc( size * sizeof( Character ) );
    
    initializeCharacters( arr, size );
    printCharacters( arr, size );

    free( arr );

    return 0;
}
