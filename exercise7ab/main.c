#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main( int argc, char* argv[] )
{
    LLNode* head = NULL;
    LLNode* node1;
    LLNode* node2;
    LLNode* node3;
    LLNode* ptr; /* used for traversing the linked list */

    node1 = createNode( 10 );
    node2 = createNode( 20 );
    node3 = createNode( 30 );

    head = insertNode( head, node1 );
    head = insertNode( head, node2 );
    head = insertNode( head, node3 );

    printLinkedList( head );

    free( node1 );
    free( node2 );
    free( node3 );

    return 0;
}
