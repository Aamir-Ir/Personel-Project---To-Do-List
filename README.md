# Personel-Project---To-Do-List
This project is a personal project of mine where I have created a TO DO LIST which is implemented using the Queue ADT as a Linked List. It contains the common operations performed by a simple queue ADT such as enqueue, and dequeu, and get length. Each file contains an operation which is explained through the comments.

Purpose:
You can use this to create a to do list and set goals that you will complete in order. Once you have created a final draft you can output the list to a text file which you can print to recive a hard copy in a checklist format. You can also keep the program open and complete the list in order from the top to bottom.

Memory:
All the nodes and strings are dynamically allocated. I have also made sure to keep a track of all the nodes and strings I remove from the list and free them properly. To confirm this I have used valgrind to make sure there are no memory leaks, and initialization errors.

Compilation:
Use the make command to compile the program through the makefile. then use the executable named queue (./queue) to execute the program.
