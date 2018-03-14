#ifndef _List_H

#define _List_H

#define ElementType int
struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(const List L);
int IsLast(Position P, const List L);
Position Find(ElementType X, const List L);
Position FindPrevious(ElementType X, const List L);
void Delete(ElementType X, List L);
void Instert(ElementType X, List L, Position P);


#endif // _List_H
