#include "QueueArray.h"
#include <stdio.h>
#include <stdlib.h>

void initQueueArray(Queue* listQ, int n)
{
    listQ->in=-1;
    listQ->out=-1;
    listQ->size=n;
    listQ->Qu=(int *)malloc(n*sizeof(int));
}

void displayQueueArray(Queue* listQ)
{
    for(int i=listQ->in;i<=listQ->out;i++)
        printf("Value %d: %d\n",i,listQ->Qu[i]);
}

void pushQueueArray(Queue* listQ, int x)
{
    while(listQ->out+1==listQ)
    {
        if(listQ->in>0)
        {
            for(int i=0;i<((listQ->out)-(listQ->in));i++)
            {
                listQ->Qu[i]=listQ->Qu[i+listQ->in];
            }
            listQ->out=listQ->out-listQ->in;
            listQ->in=0;
        }
        else
        {
            int *newList;
            newList=(int *)malloc((listQ->out+1)*sizeof(int));
            for(int i=0;i<=listQ->out;i++)
            {
                newList[i]=listQ->Qu[i];
            }
            listQ->Qu=newList;

        }
    }
    ++listQ->out;
    listQ->Qu[listQ->out]=x;
    if(listQ->in==-1)
        listQ->in=0;
}

void popQueueArray(Queue* listQ)
{
    ++listQ->in;
}
