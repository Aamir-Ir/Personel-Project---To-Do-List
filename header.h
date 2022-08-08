#include <stdio.h>          
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

/*
    myQueue structure consists of the data which is a single integer and the dynamic coonection to the next node in the queue.
*/

typedef struct toDoList{
    char * goal; 		       // Integer value.
    struct toDoList * next;   // Dynamic connection to the next node in the queue.
}queue;

// Common queue ADT Operations (See functions for further explanations).

void QueueEnqueue(queue ** head, queue ** tail, int length, char * goal);

void QueueDequeue(queue ** head, queue ** tail);

void printQueue(queue * head);

// This function will be used to create a textfile which can be printed for a hard copy of the TO DO LIST.

void SaveGoals(queue * head);

// Helper functions (See functions for further explanations).

void freeQueue(queue * head);

int getLength(queue * head);

int menu();