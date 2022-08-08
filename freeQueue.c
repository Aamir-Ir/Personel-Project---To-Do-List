# include "header.h"

/*
    This function is used to free all the nodes in the HEAP that we have created and stored on the HEAP using the malloc function.
    This is possible as the head node has access to every node that we have allocated on the HEAP as the head pointer points to the 
    first node in the queue and all others nodes are linked using the next pointer in the pointer part of the node therefore every
    node can be traversed by using the head pointer so we can free every node on the HEAP. This will result in 0 memory leaks.
*/

void freeQueue(queue * head)    {
    queue * curNode = head;             // Set curNode to point where head node points.

    // Traverse the queue to free all the nodes once the program ends as there is no need to keep the queue in memory.

    while (head != NULL)    {
        curNode = head;                 // This curNode stores the address of the node head points to temporarily.
        head = head->next;              // Traverse head forward 1 node.
        free(curNode->goal);            // Free the pointer data of the curNode node.
        free(curNode);                  // Free the pointer of the curNode node.
    }    
}