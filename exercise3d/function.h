#ifndef FUNCTION_H
#define FUNCTION_H

typedef struct Character
{
    char name[ 100 ];
    int hp;
} Character;

void initializeCharacters( Character* array, int size );
void printCharacters( Character* array, int size );

#endif
