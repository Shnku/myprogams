#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int roll;
    float marks;
};

struct student stnd;

int main()
{
    printf("\n");

    printf("enter student name: ");
    scanf("%s", stnd.name);
    printf("enter student roll: ");
    scanf("%d", &stnd.roll);
    printf("enter student marks: ");
    scanf("%f", &stnd.marks);

    printf("\n");

    printf("%s   ", stnd.name);
    printf("%d   ", stnd.roll);
    printf("%f   ", stnd.marks);
}
