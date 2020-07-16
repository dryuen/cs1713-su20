#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

/* this function will take in the pointer to the head of the 
linked list and a pointer to a new node to be inserted at the 
beginning of the linked list. It will return the pointer to 
the head of the linked list */
LLNode* insertNode( LLNode* h, LLNode* n )
{
    /* we are assuming that n is actually pointing to a node */
    n->next = h; /* only access next if n is pointing to a node */
    h = n;
    return h;
}

LLNode* createNode( int n )
{
    LLNode* newNode;
    newNode = (LLNode*) malloc( sizeof( LLNode ) );
    newNode->value = n;
    newNode->next = NULL;

    return newNode;
}

void printLinkedList( LLNode* h )
{
    LLNode* ptr;
    for( ptr = h; ptr != NULL; ptr = ptr->next )
    {
        printf( "%d\t", ptr->value );
    }
    printf( "\n" );
}
