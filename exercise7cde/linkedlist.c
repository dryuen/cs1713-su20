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

/* this function will insert in order of values and it will return
a pointer to the head of the linked list */
LLNode* insertNodeInOrder( LLNode* h, LLNode* n )
{
    // head -> 50 -> 45 -> 35 -> 30 -> 10 -> null

    /* consider what happens if the linked list is empty,
      or you need to insert before the head */

    LLNode* ptr;
    for( ptr = head; ptr != NULL; ptr = ptr->next )
    {
        if( n->value > ptr->value )
        {
            // we found the spot, but we need to add before it
            // so, we need the previous pointer
        }
    }
}

LLNode* createNode( int n )
{
    LLNode* newNode;
    newNode = (LLNode*) malloc( sizeof( LLNode ) );
    newNode->value = n;
    newNode->next = NULL;

    return newNode;
}
/*
for( ptr = h; ptr->next != NULL; ptr = ptr->next );
// here ptr is pointing at the last node in the LL
ptr->next = n;
*/
void printLinkedList( LLNode* h )
{
    LLNode* ptr;
    for( ptr = h; ptr != NULL; ptr = ptr->next )
    {
        printf( "%d\t", ptr->value );
    }
    printf( "\n" );
}


LLNode* findNode( LLNode* h, int key )
{
    LLNode* ptr;
    for( ptr = h; ptr != NULL; ptr = ptr->next )
    {
        if( ptr->value == key )
            return ptr;
    }
    return NULL;
}
/* returns a pointer to the head of the linked list */
LLNode* removeNode( LLNode* h, int key )
{
    LLNode* ptr;
    LLNode* previous = NULL;
    for( ptr = h; ptr != NULL; ptr = ptr->next )
    {
        if( ptr->value == key )
        {
            LLNode* temp = ptr;
            if( previous == NULL )
                h = h->next;
            else
                previous->next = ptr->next;

            free( temp );
            break;
        }
        previous = ptr;
    }
    return h;
}



void printLLRecursively( LLNode* h )
{
    if( h == NULL )
        return;

    printLLRecursively( h->next );
    printf( "%d\t", h->value );
}

void deleteLinkedList( LLNode* h )
{
    LLNode* p = h;
    while( p != NULL )
    {
        LLNode* temp = p;
        p = p->next;
        free( temp );
    }
}
