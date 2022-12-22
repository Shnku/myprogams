#include <stdio.h>
int main()
{
  int a,b,c;
  for (a=1;a<5;a++)
  {
    for(b=1;b<5;b++)
    {
      for(c=1;c<5;c++)
      printf("%d",c );
    }
    printf("%d\n",b );
  }
  printf("\n");
return 0;
}
