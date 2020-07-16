#include <stdio.h>
#include "sort.h"

void insertionSort( int* array, int length )
{
    int i, j, temp;

    for( i = 0; i < length; i++ ) 
    { 
        j = i;
        while( j > 0 && array[ j ] < array[ j - 1 ] ) 
        {       
            temp = array[ j ];
            array[ j ] = array[ j - 1 ];
            array[ j - 1 ] = temp; 
            j--; 
        } 
    }
}

////////////////////////////////////////
void selectionSort( int* array, int length )
{
    int i, j, temp, smallestIndex;
    for( i = 0; i < length - 1; i++ ) 
    { 
        smallestIndex = i;
        for( j = i + 1; j < length; j++ ) 
        { 
            if( array[ j ] < array[ smallestIndex ] ) 
                  smallestIndex = j;
        } 
        temp = array[ i ];
        array[ i ] = array[ smallestIndex ];
        array[ smallestIndex ] = temp; 
    }
}

//////////////////////////////
void bubbleSort( int* array, int length )
{
    int i, j, temp;

    for( i = 0; i < length - 1; i++ ) 
    { 
        for( j = 0; j < length - i - 1; j++ ) 
        { 
            if( array[ j ] > array[ j + 1 ] ) 
            { 
                 temp = array[ j ];
                 array[ j ] = array[ j + 1 ];
                 array[ j + 1 ] = temp; 
            } 
        }
    }
}

//////////////////////////////
void printArray( int* a, int n )
{
    int i;
    for( i = 0; i < n; i++ )
        printf( "%d\t", a[ i ] );
    printf( "\n" );
}
