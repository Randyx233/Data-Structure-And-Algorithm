#include <stdio.h>
#include "list.h"

void PrintList(const List L)
{
    Position P = Header(L);
    if(IsEmpty(L)) {
        printf("Empty list\n");
    } else {
        do {
            P = Advance(P);
            printf("%d ", Retrieve(P));
        } while (!IsLast(P, L));
        printf("\n");
    }
}

int main()
{
    List L;
    Position P;
    int i;

    L = MakeEmpty(NULL);
    P = Header(L);
    PrintList(L);
    for(i = 0; i < 10; i++) {
        Insert(i, L, P);
        PrintList(L);
        P = Advance(P);
    }
    for(i = 0; i < 10; i++) {
        Delete(i, L);
    }
    printf("Finished deletions\n");
    PrintList(L);
    DeleteList(L);
    return 0;
}
