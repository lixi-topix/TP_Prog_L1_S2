#include <stdio.h>
#include <stdlib.h>
#include "StackLL.h"

void initStackLL(Stack* St)
{
    *St= NULL;
}

void pushStackLL(Stack* St, Elt * nEl)
{

    nEl->next = *St;
    *St=nEl;
}

void displayStackLL(Stack *St)
{
    Elt *cur;
    cur = *St;
    while(cur!=NULL)
    {
        printf("%d\n",cur->val);
        cur=cur->next;
    }
}

Elt * popStackLL(Stack* St)
{
    if(*St==NULL)
    {
        return NULL;
    }
    else
    {
        Elt * cur;
        cur = *St;
        *St=cur->next;
        return cur;

    }

}


void newElt(Elt *nEl)
{
    printf("Value for this element? ");
    scanf(" %d",&(nEl->val));
    nEl->next = NULL;
}
