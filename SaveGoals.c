# include "header.h"

void SaveGoals(queue * head)        {
        int i = 1;                              // Keep track of the number of goals.
        int length = 0;                         // Keep track of the length of the string.
        char buffer[4096];                      // Buffer input for filename.
        char * filename;                        // Pointer to filename.
        FILE * file;                            // Creation of the file pointer.
        
        // Get Filename.

        printf("Enter the filename where you would like to store your tweets:\n");
        getchar();                                                                              // Remove the newline character.
        fgets(buffer, 4096, stdin);                                                             // Get the input with no trouble for fgets.

        // Dynamically allocate the string for the goal.

        length = strlen(buffer);                                // Get the length of the string up to the newline character
        buffer[length - 1] = '\0';                              // Replace the newline character with the null character.
        filename = malloc(length * sizeof(char));               // Create just enough space on the HEAP for the new string.

        strcpy(filename, buffer);                               // Place the input into the dynamically allocated string.    

        // Create the File.

        file = fopen(filename, "w");

        // Check if file fopen operation was successful.

        if (file == NULL)       {
                printf("Could not open file.\n");
                return;
        }

        // Print the list in the text file as a checklist.

        while (head != NULL)       {
                fprintf(file, "Goal %d: %s [ ].\n\n", i, head->goal);
                head = head->next;
                i++;
        }

        printf("Output successful!\n");

        free(filename);
        fclose(file);
}


