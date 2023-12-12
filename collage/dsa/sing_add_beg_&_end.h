// #include "singly_ll_create.h"

void add_beg(LIST **head, int data)
{
    LIST *temp;
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->nxt_p = (*head)->nxt_p;
    *head = temp;
}

LIST *add_begining(LIST *head, int data)
{
    LIST *temp;
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->nxt_p = head->nxt_p;
    head = temp;
    return head;
}

void add_end(LIST **head, int data)
{
    LIST *temp;
    LIST *ptr = *head;
    while (ptr->nxt_p != NULL)
        ptr = ptr->nxt_p;
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->nxt_p = NULL;
    ptr->nxt_p = temp;
}

LIST *add_ending(LIST *head, int data)
{
    LIST *temp;
    LIST *ptr = head;
    while (ptr->nxt_p != NULL)
        ptr = ptr->nxt_p;
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->nxt_p = NULL;
    ptr->nxt_p = temp;
    return head;
}
