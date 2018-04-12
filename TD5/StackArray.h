#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED

/* Definition of a Stack */
typedef struct {
int *St;
int size;
int top;
}Stack;
/* Operations on Stack */
void initStackArray(Stack* listS, int nInit);
void pushStackArray(Stack* listS, int x);
void popStackArray(Stack *listS);
void displayStackArray(Stack* listS);

#endif // STACKARRAY_H_INCLUDED
