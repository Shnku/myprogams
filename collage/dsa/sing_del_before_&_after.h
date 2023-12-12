#include "singly_ll_create.h"

void del_bef(LIST **head, int before)
{
    LIST *temp, *prev = NULL, *ptr = *head;
    if (!(*head))
    {
        printf("list is empty....");
        return;
    }
    if ((*head)->data == before)
    {
        printf("\nno node to delete..only node");
        return;
    }
    while (ptr->nxt_p != NULL && (ptr->nxt_p)->data != before)
    {
        prev = ptr;
        ptr = ptr->nxt_p;
    }
    if (ptr->nxt_p == NULL)
        printf("\n element not found..");
    else if (ptr->data == (*head)->data)
    {
        temp = *head;
        *head = (*head)->nxt_p;
        free(temp);
    }
    else
    {
        prev->nxt_p = ptr->nxt_p;
        free(ptr);
    }
}

LIST *del_before(LIST *head, int before)
{
    LIST *temp, *ptr = head, *prev = NULL;
    if (!head)
    {
        printf("list is empty....");
        return NULL;
    }
    if (head->data == before)
    {
        printf("\nno node to delete..only node");
        return head;
    }
    while (ptr->nxt_p != NULL)
    {
        if (ptr->nxt_p->data == before)
        {
            temp = ptr;
            prev->nxt_p = ptr->nxt_p;
            free(temp);
            return head;
        }
        prev = ptr;
        ptr = ptr->nxt_p;
    }
    printf("%d doesnot present in list...", before);
}

void del_aft(LIST **head, int after)
{
    LIST *ptr = *head, *temp;
    if (!(*head))
    {
        printf("list is empty....");
        return;
    }

    while (ptr != NULL && ptr->data != after)
        ptr = ptr->nxt_p;
    if (ptr == NULL)
        printf("element not found\n");
    else if (ptr->nxt_p == NULL)
        printf("no node after this..\n");
    else
    {
        temp = ptr->nxt_p;
        ptr->nxt_p = temp->nxt_p; // ptr->nxt_p->nxt_p
        free(temp);
    }
}

LIST *del_after(LIST *head, int after)
{
    LIST *temp, *ptr = head;
    if (!head)
    {
        printf("list is empty..");
        return NULL;
    }
    while (ptr != NULL)
    {
        if (ptr->nxt_p == NULL)
        {
            printf("no node after %d ...", after);
            return head;
        }
        if (ptr->data == after)
        {
            temp = ptr->nxt_p;
            ptr->nxt_p = temp->nxt_p;
            free(temp);
            return head;
        }
        ptr = ptr->nxt_p;
    }
    printf("%d not present on list...", after);
}
