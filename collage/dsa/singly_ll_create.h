#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *nxt_p;
} LIST;
void create_list(LIST **head);
int get_input();

int get_input()
{
    int n;
    printf("\nenter the input: ");
    scanf("%d", &n);
}

void create_list(LIST **head)
{
    int data, no_of_elmnt;
}
