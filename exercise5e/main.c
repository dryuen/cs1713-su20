#include <stdio.h>

/* print out in descending order */
void doMagic1aR( int n )
{
    printf( "%d\t", n );

    if( n <= 0 )
        return;

    doMagic1aR( n - 1 );
}
/* print out in ascending order 
doMagic1bR( 2 ) -> doMagic1bR( 1 ) then print 2
doMagic1bR( 1 ) -> doMagic1bR( 0 )  then print 1
doMagic1bR( 0 ) -> doMagic1bR( -1 ) then print 0
doMagic1bR( -1 ) -> return
*/
void doMagic1bR( int n )
{
    if( n < 0 )
        return;

    doMagic1bR( n - 1 );
    printf( "%d\t", n );
}


void printArray( int* a, int n )
{
    if( n < 0 )
        return;

    printArray( a, n - 1 );

    printf( "%d\t", a[ n ] );
}


int sumArray( int* a, int n )
{
    if( n < 0 )
        return 0;

    return a[ n ] + sumArray( a, n - 1 );
}


void printEvens( int a, int b )
{
    if( a % 2 == 1 )
        a--;

    if( a > b )
        return;

    printf( "%d\t", a );
   
    printEvens( a + 2, b );
}

int countOdds( int* a, int n )
{
    if( n < 0 )
        return 0;

    if( a[ n ] % 2 == 1 )
        return 1 + countOdds( a, n - 1 );
    else
        return 0 + countOdds( a, n - 1 );
}

/*
    int a[] = { 20, 75, 80, 33, 17 };

    countOdds( a, 4 ) -> look at a[ 4 ] (17) then return 1 + countOdds( a, 3 )
    countOdds( a, 3 ) -> look at a[ 3 ] (33) then return 1 + countOdds( a, 2 )
    countOdds( a, 2 ) -> look at a[ 2 ] (80) then return 0 + countOdds( a, 1 )
    countOdds( a, 1 ) -> look at a[ 1 ] (75) then return 1 + countOdds( a, 0 )
    countOdds( a, 0 ) -> look at a[ 0 ] (20) then return 0 + countOdds( a, -1 )
    countOdds( a, -1 ) -> return 0 
*/

int main( int argc, char* arg[] )
{
    //printEvens( 10, 20 );
    //printEvens( 11, 20 );
//    printEvens( 10, 21 );

    int array[] = { 20, 75, 80, 33, 17 };
    int result = countOdds( array, 4 );
    printf( "%d\n", result );



//    printArray( array, 4 );

//    doMagic1aR( 5 );
//    doMagic1bR( 5 );
    return 0;
}
