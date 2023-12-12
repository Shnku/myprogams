#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *nxt_p;
} LIST;

void display(LIST *head)
{
    if (head == NULL)
        printf("No list or LIst is empty....\n");
    else
    {
        while (head != NULL)
        {
            printf(" %d -> ", head->data);
            head = head->nxt_p;
        }
    }
}

int get_input(char *text)
{
    int n;
    printf("enter your %s: ", text);
    scanf("%d", &n);
    return n;
}

#include "sing_add_beg_&_end.h"
void create_list1(LIST **head)
{
    int data, no_of_elmnt;
    LIST *temp;
    printf("En the no of nodes: ");
    scanf("%d", &no_of_elmnt);
    *head = NULL;
    if (no_of_elmnt == 0)
        return;
    data = get_input("data");
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->nxt_p = NULL;
    *head = temp;
    for (int i = 2; i <= no_of_elmnt; i++)
    {
        data = get_input("data");
        add_end(head, data);
    }
}

LIST *create_list2(LIST *head)
{
    int data, no_of_elmnt;
    LIST *temp, *ptr;
    printf("En the no of nodes: ");
    scanf("%d", &no_of_elmnt);
    head = NULL;
    if (no_of_elmnt == 0)
        return head;
    data = get_input("data");
    // head = add_begining(head, data);
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->nxt_p = NULL;
    head = temp;
    for (int i = 2; i <= no_of_elmnt; i++)
    {
        data = get_input("data");
        head = add_ending(head, data);
    }
    return head;
}
