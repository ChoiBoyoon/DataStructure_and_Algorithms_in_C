#ifndef DisjointSet_h
#define DisjointSet_h

#include <stdio.h>
#include <stdlib.h>

typedef struct tagDisjointSet{
    struct tagDisjointSet* Parent;
    void* Data;
} DisjointSet;

//declaration of functions
void DS_UnionSet(DisjointSet* Set1, DisjointSet* Set2);
DisjointSet* DS_FindSet(DisjointSet* Set);
DisjointSet* DS_MakeSet(void* NewData);
void DS_DestroySet(DisjointSet* Set);

#endif /* DisjointSet_h */
