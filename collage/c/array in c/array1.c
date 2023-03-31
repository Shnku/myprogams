#include <string.h>
#include <stdio.h>
int main()
{
	char ch[100];
	int count = 0;
	printf("en the string: ");
	// scanf("%[^\n]s",ch);
	scanf("%[^\n]", ch); // as same as before...
	printf("you entered : %s", ch);

	printf("\nthe length is hghj: %d ", strlen(ch));
	// manual code for calc the lkength...
	while (ch[count] != '\0')
	{
		count++;
	}
	printf("\nthe length is:  %d", count);
	return 0;
}
