#include <stdio.h>
#include <stdlib.h>
//#include "StackArray.h"
//#include "QueueArray.h"
#include "StackLL.h"
//#include "QueueLL.h"

int main()
{
    Stack llSt;
    initStackLL(&llSt);
    for(int i=0;i<2;i++)
    {
        Elt *temp=malloc(sizeof(Elt));
        newElt(temp);
        pushStackLL(&llSt,temp);
    }
    popStackLL(&llSt);
    popStackLL(&llSt);
    Elt *temp=malloc(sizeof(Elt));
    newElt(temp);
    pushStackLL(&llSt,temp);
    displayStackLL(&llSt);
}
/*

int main_queuell()
{
    Queue llQu;
    initQueueLL(&llQu);
    for(int i=0;i<2;i++)
    {
        Elt *temp=malloc(sizeof(Elt));
        newEltq(temp);
        pushQueueLL(&llQu,temp);
    }
    popQueueLL(&llQu);
    popQueueLL(&llQu);
    Elt *temp=malloc(sizeof(Elt));
    newEltq(temp);
    pushQueueLL(&llQu,temp);
    displayQueueLL(&llQu);
}

int main_queue()
{
    Queue lQu;
    initQueueArray(&lQu,2);
    pushQueueArray(&lQu,5);
    pushQueueArray(&lQu,8);
    pushQueueArray(&lQu,15);
    pushQueueArray(&lQu,5);
    popQueueArray(&lQu);
    pushQueueArray(&lQu,5);
    pushQueueArray(&lQu,5);
    displayQueueArray(&lQu);
}


int main_stack()
{
    Stack lSt;
    initStackArray(&lSt,1);
    pushStackArray(&lSt,6);
    pushStackArray(&lSt,8);
    pushStackArray(&lSt,66);
    displayStackArray(&lSt);
    popStackArray(&lSt);
    displayStackArray(&lSt);
}
*/
