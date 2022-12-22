#include <stdio.h>
#include <stdlib.h>
#define max 10

int queue[max];  //array of queue....
int rare= -1;
int front= 0;
int data;

//function for enqueue.................
void enque(int a)
{
	if(rare==max-1){
		printf("queue is full");
		return ;
	}
	rare=rare+1;
	queue[rare]=a;
}
//function for dequeue.........
int deque()
{
	//int data;
	if(front<0||front>rare)/*front==-1  is wrong*/
	{	printf("queue is empty");
		return 1;
	}
	data=queue[front];
	front=front+1;
	return (data);
}
//function for display........
int display()
{
	for(int i=0;i<=rare;i++)
	{
		printf("\n%d th elements in the queue are :%d",i, queue[i]);
		
	}
	return 0;
}
//function foe odd sum..........
void odd()
{
	int sum=0;
	int count=0;
	for(int i=front;i<=rare;i++)
	{
		printf("\n%d th elements in the queue are :%d",i, queue[i]);
		if(queue[i]%2==0)
		{	
			int vlu=queue[i];
			count++;
			sum=sum+vlu;
		}
	}
	printf("\nnumber of odd %d",count);
	printf("\nsum of odd %d",sum);
}
//function for even no sum..............
void even()
{
	int sum=0;
	int count=0;
	for(int i=front;i<=rare;i++)
	{
		printf("\n%d th elements in the queue are :%d",i, queue[i]);
		if(queue[i]%2!=0)
		{	count++;
			int vlu=queue[i];
			sum=sum+vlu;
		}
	}
	printf("\nnumer of even %d",count);
	printf("\nsum of even %d",sum);
}
//the main funcion......................
int main()
{
	int x;
	while(1)
	{	
		printf("____________________________________________________________");
		printf("\nenter choise:->(1.enq, 2.deq, 3.dply, 4.exit, 5.odd, 6.even)= ");
		scanf("%d",&x);
		printf("------------------------------------------------------------");
		switch(x)
		{
			case 1:
				printf("\nen vlu for insert : ");
				int x;
				scanf("%d",&x);
				enque(x);
				break;	
			case 2:
				//deque();
				printf("\nFIF Out data= %d",deque());
				break;	
			case 3:
				display();
				break;	
			case 4:
				exit(1);
				break;
			case 5:
				odd();
				break;
			case 6:
				even();
				break;		
			default:
				printf("wong choice");
				break;
		}
	}
	
}

//int main()
//{
	//enque(1);
	//enque(2);
	//enque(3);
	//printf("the entered data are:  ");
	//for(int i=0;i<max;i++)
		//printf("%d",queue[i]);
	//deque();
	//deque();
	//for(int i=0;i<max;i++)
		//printf("\nenqued data %d",queue[i]);
//}
