
#include "singly_ll_create.h"
// #include "sing_add_beg_&_end.h"
#include "sing_add_before_&_after.h"
#include "sing_del_beg_&_end.h"
#include "sing_del_before_&_after.h"
#include "sing_del_spec_or_all.h"

int main()
{
    LIST *head = NULL;
    int data, choice, position;

    printf("\n__this is a link list program__\navailavle options---\n");
    while (1)
    {
        printf("\n___________________________________");
        printf("\n\t1) create list");
        printf("\n\t2) add beginning");
        printf("\n\t3) add end");
        printf("\n\t4) add after");
        printf("\n\t5) add before");
        printf("\n\t6) delete beginning");
        printf("\n\t7) delete end");
        printf("\n\t8) delete after");
        printf("\n\t9) delete before");
        printf("\n\t10) delete specified");
        printf("\n\t11) delete full list");
        printf("\n\t12) display list");
        printf("\n__other input will exit the program__\n");
        choice = get_input("choice");
        switch (choice)
        {
        case 1:
            printf("___createing the singly link LIST______\n");
            create_list1(&head);
            // head = create_list2(head);
            break;
        case 2:
            data = get_input("data");
            add_beg(&head, data);
            // head = add_begining(head, data);
            break;
        case 3:
            data = get_input("data");
            add_end(&head, data);
            // head = add_ending(head, data);
            break;
        case 4:
            printf("\nAfter which to add? ");
            position = get_input("after");
            data = get_input("data");
            add_aft(&head, position, data);
            // head = add_after(head, position, data);
            break;
        case 5:
            printf("\nbefore which to add? ");
            position = get_input("before");
            data = get_input("data");
            add_bef(&head, position, data);
            // head = add_before(head, position, data);
            break;
        case 6:
            printf("\ndelete beginning..");
            del_beg(&head);
            // head = del_beginning(head);
            break;
        case 7:
            printf("\ndelete end...");
            del_end(&head);
            // head = del_ending(head);
            break;
        case 8:
            printf("\nafter what to delete? ");
            position = get_input("after");
            del_aft(&head, position);
            // head = del_after(head, position);
            break;
        case 9:
            printf("\nbefore what to delete");
            position = get_input("before");
            del_bef(&head, position);
            // head = del_before(head, position);
            break;
        case 10:
            data = get_input("specific data to delete ");
            head = delete_spec(head, data);
            break;
        case 11:
            printf("\nfreeing full list......");
            head = delete_all(head);
            break;
        case 12:
            printf("\n___displaying the LIST______\n");
            display(head);
            break;
        default:
            printf("\nEXITING......");
            exit(1);
        }
    }

    return 0;
}
