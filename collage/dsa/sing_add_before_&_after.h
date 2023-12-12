// #include "singly_ll_create.h"

void add_bef(LIST **head, int before, int data)
{
    LIST *temp, *ptr, *prev;
    if (*head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    ptr = *head;
    prev = NULL;
    if ((*head)->data == before)
    {
        temp->nxt_p = *head;
        *head = temp;
        return;
    }
    while (ptr != NULL && ptr->data != before)
    {
        prev = ptr;
        ptr = ptr->nxt_p;
    }
    if (!ptr)
    {
        temp->nxt_p = ptr;
        prev->nxt_p = temp;
    }
    else
    {
        printf("%d not present in list,", before);
        free(temp);
    }
}

LIST *add_before(LIST *head, int before, int data)
{
    LIST *temp, *ptr, *prev;
    if (head == NULL)
    {
        printf("list is empty\n");
        return head;
    }
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    ptr = head;
    prev = NULL;
    if (head->data == before)
    {
        temp->nxt_p = head;
        head = temp;
        return head;
    }
    return head;
}

void add_aft(LIST **head, int after, int data)
{
    LIST *temp, *ptr;
    if (!(*head))
    {
        printf("list is empty....\n");
        return;
    }
    ptr = *head;
    while (ptr != NULL && ptr->data != after)
        ptr = ptr->nxt_p;
    if (ptr == NULL)
        printf("\nlement not found");
    else
    {
        temp = (LIST *)malloc(sizeof(LIST));
        temp->data = data;
        temp->nxt_p = ptr->nxt_p;
        ptr->nxt_p = temp;
    }
}

LIST *add_after(LIST *head, int after, int data)
{
    LIST *temp, *ptr = head;
    if (!head)
    {
        printf("list is empty...\n");
        return NULL;
    }
    while (ptr != NULL)
    {
        if (ptr->data == after)
        {
            temp = (LIST *)malloc(sizeof(LIST));
            temp->data = data;
            temp->nxt_p = ptr->nxt_p;
            ptr->nxt_p = temp;
            return head;
        }
        ptr = ptr->nxt_p;
    }
    printf("%d not present in list..", after);
    return head;
}
