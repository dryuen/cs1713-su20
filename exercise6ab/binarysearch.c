#include <stdio.h>

#define MAX 10 

int binarySearch( int* array, int low, int high, int key )
{
    int mid = ( low + high ) / 2;
    printf( "low: %d\thigh: %d\tmid: %d\n", low, high, mid );
    if( array[ mid ] == key )
        return mid;

    if( low == high )
        return -1;

    if( key > array[ mid ] )
        return binarySearch( array, mid + 1, high, key );
    else /* key < array[ mid ] */
        return binarySearch( array, low, mid - 1, key );
}

int main( int argc, char* argv[] )
{
    int array[ MAX ] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    
    int result = binarySearch( array, 0, MAX - 1, 99 );
    printf( "%d\n", result );
}



/*
int binarySearch( int numbers[], int length, int key ) 
{
     int mid;
     int low;
     int high;
     low = 0;

    high = length - 1;
    while( high >= low )
    {
        mid = ( high + low ) / 2;
        if( numbers[ mid ] < key )
            low = mid + 1;
        else if( numbers[ mid ] > key )
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}
*/
