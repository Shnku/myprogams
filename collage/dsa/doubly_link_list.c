#include <stdio.h>
#include <stdlib.h>

typedef struct node_doub
{
    int data;
    struct node_doub *p_next;
    struct node_doub *p_prev;
} NODE;

NODE *creat_list(NODE *list_name)
{
    list_name = (NODE *)malloc(sizeof(NODE));
    list_name = NULL;
    return list_name;
}

int main()
{

    return 0;
}
