#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int roll;
    char name[30];
    char class[10];
    int year;
    float total_marks;
} stu;

void get_student_data_and_put_it_to_file(stu *, char *, char *);
void display_student_deta(stu);

int main()
{
    stu a;
    // FILE *fp = NULL;

    // if ((fp = fopen("file3.txt", "w")) == NULL)
    // {
    //     printf("\nfile can't be open ");
    //     exit(EXIT_FAILURE);
    // }
    char *file_name = "file_student.txt";
    char *file_mode;
    // get_student_data_and_put_it_to_file(&a, file_name, "w");
    display_student_deta(a);
    get_student_data_and_put_it_to_file(&a, file_name, "a");
    display_student_deta(a);

    return 0;
}

void get_student_data_and_put_it_to_file(stu *s1, char *fil_nm, char *mode)
{
    FILE *fp = NULL;

    if ((fp = fopen(fil_nm, mode)) == NULL)
    {
        printf("\nfile can't be open ");
        exit(EXIT_FAILURE);
    }
    printf("\nEnter student roll, name : ");
    scanf("%d", &s1->roll);
    fprintf(fp, "\n\n%d", s1->roll);
    fgets(s1->name, 30, stdin);
    fputs(s1->name, fp);
    printf("enter student class, year & marks: ");
    fgets(s1->class, 10, stdin);
    fputs(s1->class, fp);
    scanf("%d%f", &s1->year, &s1->total_marks);
    fprintf(fp, "%d\n%f", s1->year, s1->total_marks);
}

void display_student_deta(stu s1)
{
    printf("\nStudent Data:----\n%d,\t %s", s1.roll, s1.name);
    printf("class: %s,\t year: %d,\n total marks: %f", s1.class, s1.year, s1.total_marks);
}
