#include <stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
};

struct student stnd, temp;

int main()
{
	printf("enter student name: ");
	gets(stnd.name);
	printf("enter student roll: ");
	scanf("%d", &stnd.roll);
	printf("enter student marks: ");
	scanf("%f", &stnd.marks);

	printf("\n");

	printf("%s   ", stnd.name);
	printf("%d   ", stnd.roll);
	printf("%f   ", stnd.marks);
}
