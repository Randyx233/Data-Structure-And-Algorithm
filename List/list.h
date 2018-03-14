#ifndef _List_H

#define _List_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(const List L);
int IsLast(Position P, const List L);
Position Find(int X, const List L);
Position FindPrevious(int X, const List L);
void Delete(int X, List L);
void Instert(int X, List L, Position P);


#endif // _List_H
