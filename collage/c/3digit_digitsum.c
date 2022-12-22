#include <stdio.h>

int main()
{
    int no, sum, rem, cheak;
    lebel:
        printf("\neh the no: ");
        scanf("%d", &no);

        sum = 0, cheak = 0;
        while (no != 0)
        {
            rem = no % 10;
            sum = sum + rem;
            no = no / 10;
            cheak++;
        }
    // printf("\n%d", cheak);

    if (cheak == 3)
    {
        printf("\n \"VALID\"this is a 3_digit no,");
        printf("\nthe sum of 3_digit is : %d", sum);
    }
    else
    {
        printf("\n\"INVALID\", en. a 3 digit no..\n");
        goto lebel;
    }
    return 0;
}