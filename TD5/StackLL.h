#ifndef STACKLL_H_INCLUDED
#define STACKLL_H_INCLUDED

/* Definition of an element */
typedef struct elt
{
    int val;
    struct elt * next;
}Elt;

/* Definition of a Stack */
typedef Elt * Stack;

/* Operations on Stack */
void initStackLL(Stack* St);
void pushStackLL(Stack* St, Elt * nEl);
Elt * popStackLL(Stack* St);
void displayStackLL(Stack *St);

void newElt(Elt *nEl);


#endif // STACKLL_H_INCLUDED
