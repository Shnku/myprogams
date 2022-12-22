#include "stdio.h"
int main()
{
    struct student
    {
        int roll;
        char name[5];
        float no;
    };//s[3],temp;
    struct student s[5],temp;
    int i; int j;
    for (i = 0;i<5;i++)
    {
        printf("enter student name.. ");
		scanf("%s",s[i].name );  // gets(s[i].name); 
        printf("enter student role.. ");
        scanf("%d",&s[i].roll);
        printf("enter student's no.. " );
        scanf("%f",&s[i].no );
        printf("\n");
    }
    printf("\n");

    //for(i=0;i<5;i++)
    //{
        //printf("the roll is.. %d",s[i].roll);
        //printf("his name is..%s",s[i].name);
        //printf("his nois..%f",s[i].no);
        //printf("\n");
    //}
    //printf("\n");
    
//Asending order of marks...
printf(".******************************.");
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			if(s[i].no>s[j].no)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
	printf("\nthe ascendind order is.. \n\n");
	for(i=0;i<5;i++)
	{
		printf("%s -- roll %d -- %f \n",s[i].name,s[i].roll,s[i].no);
	}	
return 0;
}

