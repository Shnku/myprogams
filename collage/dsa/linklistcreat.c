#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int list_data;
    struct list *link_to_nxts_addr;
} LIST;

LIST *head_pointer = NULL;

void add_to_list(int data)
{
    LIST *tmp_iterate = head_pointer;
    LIST *new_node = (LIST *)malloc(sizeof(LIST));
    (*new_node).list_data = data;
    (*new_node).link_to_nxts_addr = NULL;

    if (head_pointer == NULL)
    {
        head_pointer = new_node;
        return;
    }

    while ((*tmp_iterate).link_to_nxts_addr != NULL)
    {
        tmp_iterate = (*tmp_iterate).link_to_nxts_addr;
    }
    (*tmp_iterate).link_to_nxts_addr = new_node;
}

void display_list()
{
    LIST *temp_iterator = head_pointer;
    while (temp_iterator != NULL)
    {
        printf("\n%d ==+ ", (*temp_iterator).list_data);
        temp_iterator = (*temp_iterator).link_to_nxts_addr;
    }
}

void free_list()
{
    LIST *temp_iterator = head_pointer;
    LIST *currently_pointed_to = NULL;
    while (temp_iterator != NULL)
    {
        currently_pointed_to = temp_iterator;
        temp_iterator = (*temp_iterator).link_to_nxts_addr;
        free(currently_pointed_to);
    }
}

int main()
{
    printf("en the data: ");
    add_to_list(1);
    add_to_list(5);
    add_to_list(4);
    add_to_list(3);
    display_list();
    free_list();
    return 0;
}
