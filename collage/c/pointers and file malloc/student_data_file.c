#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[30];
    char class[10];
    int year;
    float total_marks;
};
typedef struct student stu;
void get_student_data(stu *);
void display_student_deta(stu);

int main()
{
    stu a;
    FILE *fp = NULL;
    get_student_data(&a);
    display_student_deta(a);

    if (fp = fopen("file3.txt", "w") == NULL)
    {
        printf("\nfile can't be open ");
        exit(0);
    }
    
    return 0;
}

void get_student_data(stu *s1)
{
    printf("\nEnter student roll, name : ");
    scanf("%d", &s1->roll);
    fgets(s1->name, 30, stdin);
    printf("enter student class, year & marks: ");
    fgets(s1->class, 10, stdin);
    scanf("%d%f", &s1->year, &s1->total_marks);
}

void display_student_deta(stu s1)
{
    printf("\nStudent Data:----\n%d, %s", s1.roll, s1.name);
    printf("class: %s year: %d, total marks: %f", s1.class, s1.year, s1.total_marks);
}