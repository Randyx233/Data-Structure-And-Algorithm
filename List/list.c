#include "fatal.h"
#include "list.h"

struct Node
{
    ElementType Element;
    Position Next;
};

List MakeEmpty(List L)
{
    L->Next = NULL;
    return L;
}

int IsEmpty(List L)
{
    return L->Next == NULL;
}

int IsLast(Position P, const List L)
{
    return P->Next == NULL;
}

Position Find(ElementType X, List L)
{
    Position P;
    P = L->Next;
    while(P != NULL && P->Element != X) {
        P = P->Next;
    }
    return P;
}


Position FindPrevious(ElementType X, List L)
{
    Position P;
    P = L->Next;
    while(P->Next != NULL && P->Next->Element != X) {
        P = P->Next;
    }
    return P;
}

void Delete(ElementType X, List L)
{
    Position P, TmpCell;
    P = FindPrevious(X, L);
    if (!IsLast(P, L)) {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    } 
}

void Insert(ElementType X, List L, Position P)
{
    Position TmpCell;
    TmpCell = malloc(sizeof(struct Node));
    if(TmpCell == NULL)
        FatalError("Out of space!!");

    TmpCell->Element = X;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}

int main()
{

}
