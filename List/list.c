#include <stdio.h>

struct Node
{
    int Element;
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

Position Find(int X, List L)
{
    Posirion P;
    P = L->Next;
    While(P != NULL && P->Element != X) {
        P = P->Next;
    }
    return P;
}


Position FindPrevious(int X, List L)
{
    Posirion P;
    P = L->Next;
    While(P->Next != NULL && P->Next->Element != X) {
        P = P->Next;
    }
    return P;
}

void Delete(int X, List L)
{
    Position P, TmpCell;
    P = FindPreVious(int X, List L);
    if (!IsLast(P, L)) {
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    } 
}

int main()
{
}
