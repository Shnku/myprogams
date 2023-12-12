// #include "singly_ll_create.h"

void del_beg(LIST **head)
{
    if (*head == NULL)
    {
        printf("\nlist is empty..");
        return;
    }
    LIST *ptr = *head;
    *head = ptr->nxt_p;
    free(ptr);
}

LIST *del_beginning(LIST *head)
{
    if (head == NULL)
    {
        printf("\nlist is empty..");
        return head;
    }
    LIST *ptr = head;
    head = ptr->nxt_p;
    free(ptr);
    return head;
}

void del_end(LIST **head)
{
    LIST *ptr, *temp, *prev = NULL;
    if (*head == NULL)
    {
        printf("\n list is empty");
        return;
    }
    ptr = *head;
    while (ptr != NULL)
    {
        prev = ptr;
        ptr = ptr->nxt_p;
    }
    prev->nxt_p = NULL;
}

LIST *del_ending(LIST *head)
{
    LIST *ptr, *temp, *prev = NULL;
    if (head == NULL)
    {
        printf("\n list is empty");
        return head;
    }
    ptr = head;
    while (ptr != NULL)
    {
        prev = ptr;
        ptr = ptr->nxt_p;
    }
    prev->nxt_p = NULL;
    return head;
}
