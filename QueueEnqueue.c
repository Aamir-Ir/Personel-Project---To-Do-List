# include "header.h"

void QueueEnqueue(queue ** head, queue ** tail, int length, char * goal)  {
    queue * newNode = malloc(sizeof(queue));
    newNode->next = NULL;
    newNode->goal = malloc(length * sizeof(char));
    strcpy(newNode->goal, goal);

    /* 
        Case 1: The queue is empty (because head pointes to NULL) therefore both the head and the tail nodes will be made to point to 
        the newNode.
    */

    if (*head == NULL)   {   
        *head = newNode;
        *tail = newNode;
    }

    /* 
        Case 2: The queue is not empty as the head pointer does not point to NULL this means that we append to the start of the queue by 
        modifying the tail's next node to point to newNode and then updating the tail pointer to newNode as that it is the new tail.
    */

    else{
        (*tail)->next = newNode;
        *tail = newNode;
    }

    free(goal);     // No longer needed as it is now in the data part of the node.
}