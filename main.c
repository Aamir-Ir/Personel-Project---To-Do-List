# include "header.h"

int main(int argc, char * argv[])  {
    int input;                          // Keeps track of user input for menu operations.
    int length = 0;                     // Keeps track of user input for string length for goals.
    char buffer[4096];                  // A buffer input so we can dynamically allocate space on the HEAP for the goal.
    char * goal;                        // The goal char * that will point to the goal.
    queue * head = NULL;                // The head of the queue.
    queue * tail = NULL;                // The tail of the queue.

    // Menu/Greeting.

    printf("Hello Welcome to the TO DO LIST PROGRAM.\n\n");
    printf("How to use the program.\n");
    printf("Step 1: Create a final to do list for the day or a project you need to work on (make sure it is done in order).\n");
    printf("Step 2: Then once you have created a final draft test print it to see if the final product makes sense.\n");
    printf("Step 3: Now once the final draft is ready save the goals in to a file to use as a hardcopy or just simply use the program through the day to complete the list in order starting from the top.\n\n");
    input = menu();
    
    // Run the program until the user enters 0 to end it.

    while (input != 0)    {
        
        /*
            if the input is in the appropriate range to run the operations.
        */

        if ((input >= 0) && (input <= 4))   {
            
            // Operation 1: Place a new goal to the queue at the bottom.

            if (input == 1) {
                
                // Ask for user input and get rid of the newline character so fgets() function is able to get input properly.

                printf("Enter a Goal: ");
                getchar();                                          // Remove the newline character.
                fgets(buffer, 4096, stdin);                         // Get the input with no trouble for fgets.

                // Dynamically allocate the string for the goal.

                length = strlen(buffer);                            // Get the length of the string up to the newline character
                buffer[length - 1] = '\0';                          // Replace the newline character with the null character.
                goal = malloc(length * sizeof(char));               // Create just enough space on the HEAP for the new string.

                strcpy(goal, buffer);                               // Place the input into the dynamically allocated string.
                QueueEnqueue(&head, &tail, length, goal);           // Add the string to the queue.
            }

            // Operation 2: Used to remove the 1st goal in the list as it will be completed.

            else if (input == 2)  {
        
                // Case 1: The queue is empty (head is NULL).

                if (head == NULL)   {
                    printf("The list is empty, create goals in order to complete them.\n");
                }

                // Case 2: The queue is not empty (head is not NULL) so perform the operation.
                
                else    {
                    QueueDequeue(&head, &tail);
                    printf("The 1st goal was removed due to completion. Congratulation.\n");
                }
            }

            // Operation 3: Place a new goal to the queue at the bottom.

            else if (input == 3)    {
                printQueue(head);                                   // Test print the goal sheet.
            }

            // Operation 4: Finally output a file with all the goals as a checklist.

            else if (input == 4)    {
                SaveGoals(head);
            }
        
            // Ask the user for the next operation.

            printf("Previous operation complete.\n");
            input = menu();
        }
        
        else    {

            // Error Handling for incorrect integer.

            printf("Error Previous operation incomplete due to an invalid integer. Try again.\n");
            input = menu();
        }
    }

    // Free all the nodes and the data they hold so that there are 0 memory leaks and 0 initialization errors.

    freeQueue(head);

    return 1;
}