#include <stdio.h>
#include <stdlib.h>

typedef struct graph
{
    int pre_vtx;
    int nxt_vtx;
    int edg_wgt;
} GRAPH;

typedef enum
{
    false,
    true
} bool;

