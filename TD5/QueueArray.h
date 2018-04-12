#ifndef QUEUEARRAY_H_INCLUDED
#define QUEUEARRAY_H_INCLUDED

/* definition of a Queue */
typedef struct {
int * Qu;
int size;
int in;
int out;
}Queue;
void initQueueArray(Queue* listQ, int n);
void pushQueueArray(Queue* listQ, int x);
void popQueueArray(Queue* listQ);
void displayQueueArray(Queue* listQ);


#endif // QUEUEARRAY_H_INCLUDED
