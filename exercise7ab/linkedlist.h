#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/* This struct is for a linked list node */
typedef struct LLNode
{
    int value;
    struct LLNode* next;
} LLNode;


/* this function will take in the pointer to the head of the linked list
and a pointer to a new node to be inserted at the beginning of the linked list.
It will return the pointer to the head of the linked list */
LLNode* insertNode( LLNode* h, LLNode* n );

/*
Write a function that creates a new node. It takes in a whole 
number as a parameter and returns a pointer to the new node. 
*/
LLNode* createNode( int );

/*
Write a function that will traverse the linked list and print 
out each value. The function will take a pointer to the head 
of a linked list. It returns nothing.   
*/
void printLinkedList( LLNode* );

#endif
