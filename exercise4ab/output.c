#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{
    FILE* fileOut = NULL;
    int i;
    int num;
    int input;
    fileOut = fopen( "myoutput.txt", "w" );

    if( fileOut == NULL )
    {
        printf( "error\n" );
        return 1;
    }

    printf( "enter a number: " );
    scanf( "%d", &input );

    fprintf( fileOut, "Random Number Generator Report\n" );
    fprintf( fileOut, "------------------------------\n" );

    for( i = 0; i < input; i++ )
    {
        num = rand() % 100;
        fprintf( fileOut, "random number %d: %d\n", i, num );
    }
    fprintf( fileOut, "------------------------------\n" );
    fprintf( fileOut, "total number of random values: %d\n", input );

    fclose( fileOut );

    return 0;
}
