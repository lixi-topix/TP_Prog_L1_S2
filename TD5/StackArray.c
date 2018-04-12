#include "StackArray.h"
#include <stdio.h>
#include <stdlib.h>

void initStackArray(Stack* listS, int nInit)
{
    listS->top=-1;
    listS->size=nInit;
    listS->St=(int *)malloc(nInit*sizeof(int));

}

void displayStackArray(Stack *listS)
{
    for(int i=0;i<=listS->top;i++)
        printf("Value %d: %d\n",i,listS->St[i]);
}

void pushStackArray(Stack* listS, int x)
{
    if(listS->top+1==listS->size)
    {
        int *newList;
        newList=(int *)malloc((listS->top+1)*sizeof(int));
        for(int i=0;i<=listS->top;i++)
        {
            newList[i]=listS->St[i];
        }
        listS->St=newList;
    }
    listS->top++;
    listS->St[listS->top]=x;
}

void popStackArray(Stack *listS)
{
    --listS->top;
    int *newList;
    newList=(int *)malloc((listS->top)*sizeof(int));
    for(int i=0;i<=listS->top;i++)
    {
        newList[i]=listS->St[i];
    }
    listS->St=newList;
}
