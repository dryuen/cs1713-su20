#include <stdio.h>
#include <string.h>

int main( int argc, char* argv[] )
{
    FILE* fIn = NULL;
    char buffer[ 1000 ];
    int row = 0;
    int month, passengers;
    char origin[ 4 ];
    char dest[ 4 ];
    char carrier[ 4 ];
    char category[ 20 ];
    int countBA = 0;
    int countJL = 0;
    
    if( argc < 2 )
    {
        printf( "ERROR not enough arguments.\n" );
        return 1;
    }
    
    fIn = fopen( argv[ 1 ], "r" );

    if( fIn == NULL )
    {
        printf( "ERROR file does not exist.\n" );
        return 1;
    }

    while( fgets( buffer, 1000, fIn ) != NULL )
    {
        /* 2,JFK,LHR,BA,Passengers,80736 */

        if( row > 0 )
        {
            /* put your sscanf statement */
            sscanf( buffer, "%d,%[^,],%[^,],%[^,],%[^,],%d", &month, origin,
                                    dest, carrier, category, &passengers );

            if( strcmp( carrier, "BA" ) == 0 )
            {
                printf( "BA flies out of %s\n", origin );
                countBA++;
            }

            if( strcmp( carrier, "JL" ) == 0 )
            {
                printf( "JL flies out of %s\n", origin );
                countJL += passengers;
            }
        }
        row++;
    }
    printf( "BA origin airport count: %d\n", countBA );
    printf( "JL total passengers: %d\n", countJL );
    printf( "Number of rows: %d\n", row );


    fclose( fIn );

    return 0;
}
