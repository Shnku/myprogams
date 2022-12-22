#include <stdio.h>
#include <string.h>
int main()
{
	struct student
	{
		int roll;
		char name[10];
		float marks;
	};
	struct student s[3];
	int i;
	int j,temp,temp1;
	char temp2[10];
	for(i=0;i<3;i++)
	{
		printf("enter new student name..     ");
		scanf("%s",s[i].name);
		printf("enter above student roll..   ");
		scanf("%d",&s[i].roll);
		printf("enter above student marks..  ");
		scanf("%f",&s[i].marks);
		printf("\n");
	}
printf(".*****************************.");
//printing student input data...
	for(i=0;i<3;i++)
	{
		printf("\nthe name is.. %s",s[i].name);
		printf("\nhis roll is.. %d",s[i].roll);
		printf("\nhis marks is..%f",s[i].marks);
		printf("\n");
	}
//desending order of marks...
printf(".******************************.");
	for(i=0;i<3;i++)
		for(j=i+1;j<3;j++)
			if(s[i].marks<s[j].marks)
			{
				temp=s[i].marks;
				s[i].marks=s[j].marks;
				s[j].marks=temp;

				temp1=s[i].roll;
				s[i].roll=s[j].roll;
				s[j].roll=temp1;

				strcpy(temp2,s[i].name);
				strcpy(s[i].name,s[j].name);
				strcpy(s[j].name,temp2);
			}
	printf("\nthe descendind order is.. \n\n");
	for(i=0;i<3;i++)
	{
		printf("%s -- roll %d -- %f \n",s[i].name,s[i].roll,s[i].marks);
	}
}
