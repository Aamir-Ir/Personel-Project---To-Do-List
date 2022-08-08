# include "header.h"

/*
    This function is the GetLength function and it simulates the operation GetLength for the Quue ADT where it returns the size of 
    the linked list.
*/

int getLength(queue * head)    {
    int count = 0;                  // Set count to 0 this will keep track of the number of nodes in the queue.
    queue * curNode = head;         // Make curNode point to the head of the queue.
    
    // While curNode does not hit the end of the queue count each node.

    while (curNode != NULL) {
        count++;                    // Add as it is not null so we have a node.
        curNode = curNode->next;    // Traverse the queue.
    }

    // Return the count.

    return count;
}