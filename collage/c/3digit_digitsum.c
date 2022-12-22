#include <stdio.h>

int main()
{
    int no, sum, rem, cheak;
    sum = 0, cheak = 0;
    lebel:
        printf("\neh the no: ");
        scanf("%d", &no);

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
        printf("\nthis is a 3_digit no \"VALID\",");
        printf("\nthe sum of 3_digit is :%d", sum);
    }
    else
    {
        printf("\n\"INVALID\", en. a 3 digit no..");
        goto lebel;
    }
    return 0;
}