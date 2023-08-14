#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int list_data;
    struct list *link_to_nxts_addr;
} LIST;

LIST *head_pointer = NULL;
LIST *current_node = NULL;

void add_to_list(int data)
{
    LIST *iterator = head_pointer;
    LIST *node = (LIST *)malloc(sizeof(LIST));
    node->list_data = data;
    node->link_to_nxts_addr = NULL;
    while (head_pointer->link_to_nxts_addr != NULL)
    {
        iterator = iterator->link_to_nxts_addr;
    }
    current_node = iterator;
    current_node->link_to_nxts_addr = node;
}

int main()
{

    printf("en the data: ");

    return 0;
}
