#include <stdio.h>
#include <stdlib.h>
#define max 4

int stack[max];
int top=-1;

void push(int data)
{
	if(top==max-1){
		printf("stack overflow.. ");
		return;
	}
	top=top+1;
	stack[top]=data;
}

int pop()
{
	int vlu;
	if(top==-1){
		printf("stack underflow..");
		exit(1);
	}
	vlu=stack[top];
	top=top-1;
	return vlu;
}

int main()
{
	//int data;
	push(4);
	push(5);
	push(7);
	push(0);
	
	for(int i=top;i>=0;i--)
		printf("%d\n",stack[i]);
}
