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
    printf("\ndisplaying list: || ");
    if (head_pointer == NULL)
        printf(" list is empty..");
    LIST *temp_iterator = head_pointer;
    while (temp_iterator != NULL)
    {
        printf("%d __ ", (*temp_iterator).list_data);
        temp_iterator = (*temp_iterator).link_to_nxts_addr;
    }
}

void delete_last()
{
    if (head_pointer == NULL) // empty..
        return;

    if (head_pointer->link_to_nxts_addr == NULL)
    {
        free(head_pointer);
        head_pointer = NULL;
        return;
    }
    LIST *current_temp = head_pointer;
    LIST *point_previous = NULL;

    // while (current_temp != NULL) //! not delete anything..
    while (current_temp->link_to_nxts_addr != NULL)
    {
        point_previous = current_temp;
        current_temp = current_temp->link_to_nxts_addr;
    }
    point_previous->link_to_nxts_addr = NULL;
    printf("\ndeleted last one %d\n", current_temp->list_data);
    free(current_temp);
}

void free_full_list()
{
    printf("\nfreeing list");
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
    LIST *head_pointer = NULL;
    printf("en the data: ");
    add_to_list(1);
    add_to_list(5);
    add_to_list(4);
    add_to_list(3);
    display_list();

    delete_last(); // del 3
    display_list();

    delete_last(); // del 4
    display_list();

    delete_last(); // del 5
    display_list();

    delete_last(); // del 1 //error..previously
    display_list();

    free_full_list();
    return 0;
}

/*
en the data:
displaying list: || 1 __ 5 __ 4 __ 3 __
deleted last one 3

displaying list: || 1 __ 5 __ 4 __
deleted last one 4

displaying list: || 1 __ 5 __
deleted last one 5

displaying list: || 1 __
displaying list: ||  list is empty..
freeing list⏎
*/
