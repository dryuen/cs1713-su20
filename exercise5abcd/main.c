#include <stdio.h>
/*

from Exercise 5D-1
doMagic1( 16 ) -> return 16 + doMagic1( 15 ) = 35
doMagic1( 15 ) -> return 1 + doMagic1( 8 ) = 19
doMagic1( 8 ) -> return 8 + doMagic1( 7 ) = 18
doMagic1( 7 ) -> return 1 + doMagic1( 4 ) = 10
doMagic1( 4 ) -> return 4 + doMagic1( 3 ) = 9
doMagic1( 3 ) -> return 5

*/

/* from exercise 5D-2

output:
8   4   2   1   0  

doMagic2( 8 ) -> print 8, then doMagic2( 4 )
doMagic2( 4 ) -> print 4, then doMagic2( 2 )
doMagic2( 2 ) -> print 2, then doMagic2( 1 )
doMagic2( 1 ) -> print 1, then doMagic2( 0 )
doMagic2( 0 ) -> print 0, then return

*/
void doMagic2( int n )
{
    printf( "%d\t", n );

    if( n <= 0 )
        return;

    doMagic2( n / 2 );
}

/*
Output:
1   2   4   8   

doMagic3( 8 ) -> doMagic3( 4 ) then print 8
doMagic3( 4 ) -> doMagic3( 2 ) then print 4
doMagic3( 2 ) -> doMagic3( 1 ) then print 2
doMagic3( 1 ) -> doMagic3( 0 ) then print 1
doMagic3( 0 ) -> return

*/
void doMagic3( int n )
{
    if( n <= 0 )
        return;

    doMagic3( n / 2 );

    printf( "%d\t", n );
}

/* 
doMagic4( 8 ) -> doMagic4( 7 ), then print 8
doMagic4( 7 ) -> doMagic4( 6 ), then print 7
doMagic4( 6 ) -> doMagic4( 5 ), then print 6
...
doMagic4( 2 ) -> doMagic4( 1 ), then print 2
doMagic4( 1 ) -> doMagic4( 0 ), then print 1
doMagic4( 0 ) -> return [base case]
*/

void doMagic4( int n )
{

    if( n <= 0 )    /* change to n <= -1 to print out 0 */
        return;
      
    doMagic4( n - 1 );
    printf( "%d\t", n )
}

int doSomething( int x )
{
    if( x <= 2 )
        return 1;

    return x * doSomething( x - 3 );
}
/* 
doSomething( 10 ) -> return 10 * doSomething( 7 ) = 280

doSomething( 7 ) -> return 7 * doSomething( 4 ) = 28

doSomething( 4 ) -> return 4 * doSomething( 1 ) = 4 

doSomething( 1 ) -> return 1 [base case] = 1
*/


int main( int argc, char* argv[] )
{
    //int result = doSomething( 10 );
    doMagic3( 8 );

    return 0;
}
