#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char* argv[] )
{
    int num1, num2;
    int sum;
    double avg;
    if( argc == 4 )
    {
        /* assume that index 2 and 3 are actually ints */
        num1 = atoi( argv[ 2 ] );
        num2 = atoi( argv[ 3 ] );
        if( strcmp( argv[ 1 ], "AVG" ) == 0 )
        {
            avg = ( num1 + num2 ) / 2.0;
            printf( "Average is %lf\n", avg );
        }
        else if( strcmp( argv[ 1 ], "SUM" ) == 0 )
        {
            sum = num1 + num2;
            printf( "Sum is %d\n", sum );
        }
        else
        {
            printf( "ERROR invalid command\n" );
            return 1;
        }
    }
    else
    {
        printf( "ERROR not enough arguments.\n" );
        return 1;
    }
    return 0;
}
