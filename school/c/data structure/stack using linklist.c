#include <stdio.h>
#include <stdlib.h>


//reating link list node structure...
 typedef struct stack{
	int data;
	struct stack *link_next;
}node;
node *top=NULL;
//struct stack node;
//struct stack node *frst;
//struct stack node *last;

//pustng function...............
void push(int no)
{
	node *temp;
	temp=(node*)malloc(sizeof(node));
	if(temp==NULL){
		printf("stack full");
		return;
	}
	temp->data=no;
	temp->link_next=top;
	top=temp;
}
//popping function.............
int pop()
{
	node *temp;
	int out_vlu;
	temp=(node*)malloc(sizeof(node));
	if(temp==NULL){
		printf("stack empty or underflo");
		return 1;
	}
	out_vlu= temp->data;
	temp=top;
	top=top->link_next;
	free(temp);
	return (out_vlu);
}
//print the linked list
void display()
{
    node *temp = top;

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
         printf("\n%d->", temp->data);
         temp = temp->link_next;
    }
    printf("NULL\n");
}
////display function................
//int display()
//{
	//while(top!=NULL)
	//{
		//printf("   %d  ", top->data);
	//}
//}
//in function................
int main()
{
	int x;
	while(1)
	{
		printf("____________________________________________________________");
		printf("\nenter choise:->(1.enq, 2.deq, 3.dply, 4.exit,)= ");
		scanf("%d",&x);
		printf("------------------------------------------------------------");
		switch(x)
		{
			case 1:
				printf("\nen vlu for insert : ");
				int x;
				scanf("%d",&x);
				push(x);
				break;	
			case 2:
				//deque();
				printf("\nlast nfast Out data= %d",pop());
				break;	
			case 3:
				display();
				break;	
			case 4:
				exit(1);
				break;	
			default:
				printf("wong choice");
				break;
		}
	}
}

