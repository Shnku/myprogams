#include <stdio.h>

int main()
{
int n[10];
int i,min;
printf("en the numbers.. ");
for(i=0;i<9;i++)
{
    printf("\n en %d elements : ", i);
    scanf("%d",&n[i]);
    if(min>n[i])
    {
        min=n[i];
    }
}
 printf("the minimum nos is.. %d",min);

return 0;
}
