# include "header.h"

/*
    A function name menu() to print the menu to reduce redundancy.
*/

int menu() {   
    int num;    // Used for input.

    // Menu for all the operations.

    printf("1) Create a new goal.\n");
    printf("2) Remove the first goal.\n");
    printf("3) Test Print all goal.\n");
    printf("4) Create a textfile with all the goals (hard copy checklist).\n");
    printf("Quit: 0\n");
    scanf("%d", &num);

    // Return users selections.
    
    return num;
}