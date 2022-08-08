queue: QueueEnqueue.o QueueDequeue.o GetLength.o printQueue.o SaveGoals.o freeQueue.o menu.o main.o
	gcc -Wall -std=c99 QueueEnqueue.o QueueDequeue.o GetLength.o printQueue.o SaveGoals.o freeQueue.o menu.o main.o -o queue

QueueEnqueue.o: QueueEnqueue.c header.h
	gcc -Wall -std=c99 -c QueueEnqueue.c

QueueDequeue.o: QueueDequeue.c header.h
	gcc -Wall -std=c99 -c QueueDequeue.c

GetLength.o: GetLength.c header.h
	gcc -Wall -std=c99 -c GetLength.c

printQueue.o: printQueue.c header.h
	gcc -Wall -std=c99 -c printQueue.c

SaveGoals.o: SaveGoals.c header.h
	gcc -Wall -std=c99 -c SaveGoals.c

freeQueue.o: freeQueue.c header.h
	gcc -Wall -std=c99 -c freeQueue.c

menu.o: menu.c header.h
	gcc -Wall -std=c99 -c menu.c

main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c

clean:
	rm *.o queue
