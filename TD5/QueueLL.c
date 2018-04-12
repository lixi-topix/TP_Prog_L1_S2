#include <stdio.h>
#include <stdlib.h>
#include "QueueLL.h"


void initQueueLL(Queue* Que)
{
    Que->first=NULL;
    Que->last=NULL;
}

void displayQueueLL(Queue *Que)
{
    Elt * cur;
    cur = Que->first;
    while(cur!=NULL)
    {
        printf("%d\n",cur->val);
        cur=cur->next;
    }
}

void pushQueueLL(Queue* Que, Elt *nElt)
{
    Elt * cur;
    if (Que->last==NULL)
    {
        Que->last=nElt;
        Que->first=nElt;
    }
    else
    {
        cur=Que->last;
        Que->last=nElt;
        cur->next=nElt;
    }
}

Elt* popQueueLL(Queue* Que)
{
    if(Que->first==NULL)
    {
        return NULL;
    }
    else
    {
        Elt * cur;
        cur=Que->first;
        Que->first=cur->next;
        if(Que->first==NULL)
            Que->last=NULL;
        return cur;
    }
}

void newEltq(Elt * nElt)
{
    printf("Value for this element? ");
    scanf(" %d",&(nElt->val));
    nElt->next=NULL;
}
