#include <stdio.h>
#define MAX 5 
#define ROWS 3
#define COLUMNS 4
int main( int argc, char* argv[] )
{/*
    int array[ MAX ] = { 2, 3, 4, 5, 6 };
    int* ptr = array;
    int i;

    
    for( i = 0; i < MAX; i++ )
    {
        printf( "%d\n", *( ptr++ ) );
    }
    printf( "ptr: %d\n", *ptr );*/
    int numbers[ ROWS ][ COLUMNS ] = {  { 10, 20, 30, 40 },
                                        { 50, 60, 70, 80 },
                                        { 90, 100, 110, 120 } };
    int* ptr = numbers[ 0 ];
    int i;

    for( i = 0; i < ROWS * COLUMNS; i++ )
    {
        printf( "%d\t", *( ptr + i ) );
        if( ( i + 1 ) % COLUMNS == 0 )
            printf( "\n" );
    }

    /*
    post-increment
    int x = 10;
    int y = x++;
    printf( "%d %d\n", x, y );

    equivalent to

    int x = 10;
    int y = x;
    x = x + 1;

    
    pre-increment
    int x = 10;
    int y = ++x;
    printf( "%d %d\n", x, y );

    equivalent to

    int x = 10;
    x = x + 1;
    int y = x;





    */
    return 0;
}
