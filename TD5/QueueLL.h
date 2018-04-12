#ifndef QUEUELL_H_INCLUDED
#define QUEUELL_H_INCLUDED

/* Definition of an element */
typedef struct elt
{
    int val;
    struct elt * next;
}Elt;

/* definition of a Queue */
typedef struct {
    Elt * first;
    Elt * last;
}Queue;

void initQueueLL(Queue* Que);
void pushQueueLL(Queue* Que, Elt *nElt);
Elt* popQueueLL(Queue* Que);
void displayQueueLL(Queue *Que);

void newEltq(Elt * nElt);

#endif // QUEUELL_H_INCLUDED
