#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *nxt_p;
} LIST;

void create_list1(LIST **head);
LIST *create_list2(LIST *head);
int get_input();

int get_input()
{
    int n;
    printf("\nenter the input: ");
    scanf("%d", &n);
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
    data = get_input();
    temp = (LIST *)malloc(sizeof(LIST));
    temp->data = data;
    temp->nxt_p = NULL;
    *head = temp;
    for (int i = 0; i < no_of_elmnt; i++)
    {
        data = get_input();
        add_end(*head, data);
    }
}

LIST *create_list2(LIST *head)
{
    int data, no_of_elmnt;
    LIST *temp, *ptr;
    printf("En the no of nodes: ");
    scanf("%d", &no_of_elmnt);
    *head = NULL;
    if (no_of_elmnt == 0)
        return head;
    data = get_input();
    head = add_begining(head, data);
    for (int i = 0; i < no_of_elmnt; i++)
    {
        data = get_input();
        head = add_ending(head, data);
    }
    return head;
}
