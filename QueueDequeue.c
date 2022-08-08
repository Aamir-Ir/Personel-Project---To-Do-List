# include "header.h"

void QueueDequeue(queue ** head, queue ** tail)    {
    queue * sucNode;                                 // Keep track of the successor node.
    queue * removedNode;                             // Keep track of the node you will remove inorder to free it later.


    removedNode = *head;                             // Keep track of the node you want to remove so you can free it.
    sucNode = (*head)->next;
    *head = sucNode;

    /*
        Sub Case: If the head node is the only node in the queue make sure the ail pointer also points to NULL so we meet the 
        conditions for an empty queue. 
    */

    if (sucNode == NULL)    {
        *tail = NULL;
    }

    free(removedNode->goal);                        // Free the data from the node you removed from the linked list.
    free(removedNode);                              // Free the node you removed from the linked list.
}