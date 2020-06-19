#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"

/* each function requires a traversal of the array! */
void initializeCharacters( Character* array, int size )
{
    int i;
    for( i = 0; i < size; i++ )
    {
        strcpy( array[ i ].name, "CS" );
        array[ i ].hp = rand() % 10;
    }
}

void printCharacters( Character* array, int size )
{
    int i;
    for( i = 0; i < size; i++ )
    {
        printf( "%s %d\n", array[ i ].name, array[ i ].hp );
    }
}
