# include "header.h"

void printQueue(queue * head) {
    int node = 1;

    /*
        If the queue is empty state that it is and promt the user to add nodes to display a queue.
    */

    if (head == NULL)   {
        printf("The To Do List is currently empty you need to add goals to display the list.\n");
        return;
    }

    queue * curNode = head;                // Create a current pointer make it point to the head pointer.

    // While the current pointer does not hit the end of the list print the data in the node and then traverse the list.

    while (curNode != NULL)    {

        // Case 1: Specify head node.

        if (node == 1)  {
            printf("Goal %d (head node): %s.\n\n", node, curNode->goal);      // Print the data. 
        }

        // Case 2: Specify tail node.

        else if (node == getLength(head))   {
            printf("Goal %d (tail node): %s.\n\n", node, curNode->goal);      // Print the data.
        }

        // Case 3: Print a node that is not head or tail.

        else{
            printf("Goal %d: %s.\n\n", node, curNode->goal);                  // Print the data.
        }

        curNode = curNode->next;                                              // Traverse the list.
        node++;                                                               // Keep track of the node.
    }
}
