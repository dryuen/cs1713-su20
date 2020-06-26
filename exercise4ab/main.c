#include <stdio.h>
#include <string.h>

#define LENGTH 200

typedef struct Words
{
    char word[ 100 ];
    int count;
} Words;

int main( int argc, char* argv[] )
{
    /* declare our array of 200 Words struct objects */
    Words wordArray[ LENGTH ];
    char str[ 100 ];
    int counter = 0;    /* how many unique words */
    int i;

    /* open our file */
    FILE* fileIn = NULL;
    fileIn = fopen( "loremipsum.txt", "r" );

    /* read in one word at a time from our file */
    while( fscanf( fileIn, "%s", str ) == 1 )
    {
        /* check to see if word already exists in current array 
            if it exists, update the frequency count */
        for( i = 0; i < counter; i++ )
        {
            if( strcmp( wordArray[ i ].word, str ) == 0 )
            {
                wordArray[ i ].count = wordArray[ i ].count + 1;
                break;
            }
        }
        /* if it does not exist, add it to the array and set the
                frequency to 1 */
        if( i == counter )
        {
            /* we know in this condition, it did not find str in the array */
            strcpy( wordArray[ i ].word, str );
            wordArray[ i ].count = 1;
            counter++;
        }
    }
    /* print out all the struct's data members in the array */
    for( i = 0; i < counter; i++ )
    {
        printf( "%s: %d\n", wordArray[ i ].word, wordArray[ i ].count );
    }

    fclose( fileIn );
    return 0;
}
