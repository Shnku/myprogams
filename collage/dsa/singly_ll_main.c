
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
        printf("\n1) create list");
        printf("\n2) add beginning");
        printf("\n3) add end");
        printf("\n4) add before");
        printf("\n5) add after");
        printf("\n6) delete beginning");
        printf("\n7) delete end");
        printf("\n8) delete after");
        printf("\n9) delete before");
        printf("\n10) delete specified");
        printf("\n11) delete full list");
        printf("\n12) display list");
        printf("\n__other input will exit the program__\n");
        choice = get_input("choice");
        printf("\nchoice=%d", choice);
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
            printf("\before which to add? ");
            position = get_input("before");
            data = get_input("data");
            add_bef(&head, position, data);
            // head = add_before(head, position, data);
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
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
