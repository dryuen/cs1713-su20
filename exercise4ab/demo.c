#include <stdio.h>

#define LENGTH 500

int main( int argc, char* argv[] )
{
    FILE* fIn = NULL;
    char a;
    char buffer[ LENGTH ];

    fIn = fopen( "loremipsum.txt", "r" );

    if( fIn == NULL )
    {
        printf( "Error\n" );
        return 1;
    }

    while( fscanf( fIn, "%s", buffer ) == 1 )
    {
        printf( "%s\n", buffer );
    }

   /* 
    while( fgets( buffer, LENGTH, fIn ) != NULL )
    {
        printf( "%s\n", buffer );
    } 
    */

/*
    while( 1 )
    {
        a = fgetc( fIn );
        if( a == EOF )
            break;

        printf( "%c\n", a );
    }
*/
    fclose( fIn );


    return 0;
}

