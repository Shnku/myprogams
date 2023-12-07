#include "singly_ll_create.h"

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
        return;
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
}

void add_aft(LIST **head, int after, int data)
{
    LIST *temp, *ptr;
}
