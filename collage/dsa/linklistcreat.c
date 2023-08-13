#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int list_data;
    int link_to_nxts_addr;
} LIST;

void add_to_list(LIST **head_ptr, int data)
{
    LIST *node = NULL;
    node->list_data = data;
}

int main()
{
    int *head_pointer = NULL;
    printf("en the data: ");

    return 0;
}
