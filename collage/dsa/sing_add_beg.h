#include "singly_ll_create.h"

void add_beg(LIST **head, int data)
{
    LIST *temp;
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->p_nxt = (*head)->p_nxt;
    *head = temp;
}

LIST *add_begining(LIST *head, int data)
{
    LIST *temp;
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->p_nxt = head->p_nxt;
    head = temp;
    return head;
}
