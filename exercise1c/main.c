#include <stdio.h>

#define MAX 5

int main( int argc, char* argv[] )
{
    /*
    Asks the user to fill the values for an array of five (5) integers.
    Compute the average and print it out.
    Print out a message indicating if the average is greater than 0 or not.
    */
    int array[ MAX ];
    int i;
    int total = 0;
    double average;

    for( i = 0; i < MAX; i++ )
    {
        printf( "Enter a value: " );
        scanf( "%d", &array[ i ] );
    }

    /* average */
    for( i = 0; i < MAX; i++ )
    {
       total = total + array[ i ];
    }
    average = (double) total / MAX;
    printf( "Average: %.2lf\n", average );

    if( average > 0 )
    {
        printf( "The average is greater than 0\n" );
    }
    else
    {
        printf( "The average is less or equal to 0\n" );
    }
    return 0;
}
