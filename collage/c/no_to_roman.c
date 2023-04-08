#include <stdio.h>

/*
So, to summarize, the syntax char tensRoman[][] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"} is not valid in C.
You need to specify the size of the second dimension explicitly when declaring a 2D array
*/
char roman_akok[][4] = {"", "I", "II", "III", "IV", "V", "VII", "VIII", "IX"};
char *roman_doshok[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
char roman_shotok[][4] = {"", "C", "CC", "CCC", "CD", "D", "D", "DC", "DCC", "DCCC", "CM"};
char roman_hajar[][4] = {"", "M", "MM", "MMM", "M#", "#", "#M", "#MM", "#MMM", "M@"};
/*
 this initialization is not valid in C.
 The issue is that you have used single quotes (') to enclose the character 'X' and the character 'L'.
 In C, single quotes are used to enclose a single character literal,
 whereas double quotes are used to enclose a string literal.
*/
void to_roman(int no);

int main()
{
    int n;
    printf("\nenter the umber: ");
    scanf("%d", &n);
    printf("\nTHE ROMAN VERSION IS____ ");
    to_roman(n);

    return 0;
}

void to_roman(int no)
{
    int rem = 0;

    int hajar = no / 1000;
    rem = no % 1000;
    int shotok = rem / 100;
    rem = rem % 100;
    int doshok = rem / 10;
    int akok = rem % 10;

    printf("%s", roman_hajar[hajar]);
    printf("%s", roman_shotok[shotok]);
    printf("%s", roman_doshok[doshok]);
    printf("%s", roman_akok[akok]);

    printf("\n\n__CONVERSION CHART__");
    printf("\nI=1\nV=5\nX=10\nL=50\nC=100\nD=500\nM=1000\n#=5000\n@=10000");
}

#if 0

enter the umber: 524
THE ROMAN VERSION IS____ DXXIV
__CONVERSION CHART__
I=1
V=5
X=10
L=50
C=100
D=500
M=1000
#= 5000
@=10000

#endif
