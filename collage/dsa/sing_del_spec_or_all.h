// #include "singly_ll_create.h"

LIST *delete_all(LIST *head)
{
    LIST *temp, *ptr = head;
    while (!ptr)
    {
        temp = ptr;
        ptr = ptr->nxt_p;
        free(temp);
    }
    return NULL;
}

LIST *delete_spec(LIST *head, int data)
{
    LIST *temp, *ptr, *prev;
    ptr = head;
    while (ptr!=NULL)
    {
        
    }
    
}
