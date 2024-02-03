// #include "singly_ll_create.h"

LIST *delete_all(LIST *head)
{
    LIST *temp, *ptr = head;
    if (head == NULL)
    {
        printf("\nlist is empty...");
        return head;
    }
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
    LIST *temp, *ptr, *prev = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == data)
        {
            temp = ptr;
            if (prev == NULL)
                head = ptr->nxt_p;
            else
                prev->nxt_p = ptr->nxt_p;
            return head;
        }
        prev = ptr;
        ptr = ptr->nxt_p;
    }
    return head;
}
