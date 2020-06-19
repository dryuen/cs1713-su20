#include <stdlib.h>
#include <stdio.h>
#include "dicegame.h"

int main( void )
{
    int num;
    Guess* array;
    printf( "DICE GAME v.1\n" );
    printf( "Enter the number of rounds you want to play (2-12): " );
    scanf( "%d", &num );
    /* Start here. Ask the user to input a value between 2-12.
       Assume user will enter a valid integer for input.
       Print out an error and end the program if out of
       bounds. */
    

    /* Dynamically allocate an array of Guess struct
       objects based on user input. If successful, 
       call fillGuesses() */
    array = (Guess*) malloc( num * sizeof( Guess ) );

    fillGuesses( array, num );

    /* Make an announcement that the game will now begin
       Compute the first dice roll for the player to guess
       against. Call getDice(). */

    /* Traverse the array of Guess struct objects and 
       simulate each guessing round. */
       
       
        /* Print out round number and type of round.
           Round number always starts at 1. */
        
    
        /* Tell the user what the previous roll and prompt them for a 
			choice in which they will guess if the next roll is
			higher or lower */
        
        /* Workout the logic for each outcome. This includes:
        	1) When the current roll matches the previous roll
        	2) When the current roll is lower than the previous roll
        	3) When the current roll is greater than the previous roll
        	
        	In case 2) and 3), you have to determine what the Player selected
        	as their choice and if they were correct or not. Also, you have
        	to determine if the round type was ELIMINATION or BONUS and
        	assess the reward/penalty appropriately.
    	*/
  
    /* Deallocate the array */
        free( array ); 
	printf( "GAME OVER\n" );

	/* Print out the points and percentage of rounds completed. */
	
    return 0;
}
