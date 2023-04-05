#include <stdio.h>
// int *no_of_alpha(char *);
void store_frequency(char *str, char *temp, int *count);
void no_of_alpha(char *, int *count);

int main()
{
    char str[50], temp[50];
    int cnt[30];

    printf("\nenter the sentense: ");
    fgets(str, 50, stdin);

    store_frequency(str, temp, cnt);
    printf("\nthe temp is: %s", temp);

    for (int i = 0; temp[i]; i++)
        printf("\ncnt[%d]= %c ....%d times", i, temp[i], cnt[i]);

    return 0;
}

void store_frequency(char *str, char *temp, int *count)
{
    int point = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        int flag = 0; // it must be declare here... else can't count after space...
        printf("\n temp[%d] <-- %c", point, str[i]);
        temp[point] = str[i];
        count[point] = 1;
        for (int j = 0; j < point; j++)
        {
            if (temp[j] == str[i])
            {
                count[j]++;
                flag = 1;
            }
        }
        if (flag == 1)
            continue;
        point++;
    }
    temp[point] = '\0';
    printf("\n%s temp: ", temp);
    // return point;
}

/*
enter the sentense: this is the sen

 temp[0] <-- t
 temp[1] <-- h
 temp[2] <-- i
 temp[3] <-- s
 temp[4] <--
 temp[5] <-- i
 temp[5] <-- s
 temp[5] <--
 temp[5] <-- t
 temp[5] <-- h
 temp[5] <-- e
 temp[6] <--
 temp[6] <-- s
 temp[6] <-- e
 temp[6] <-- n
 temp[7] <--

this en
 temp:
the temp is: this en

cnt[0]= t ....2 times
cnt[1]= h ....2 times
cnt[2]= i ....2 times
cnt[3]= s ....3 times
cnt[4]=   ....3 times
cnt[5]= e ....2 times
cnt[6]= n ....1 times
cnt[7]=
 ....1 times
*/

/*
The reason why the behavior is different for char and int arrays is because of how they are stored in memory.

In the case of int arrays, each element is stored in a contiguous block of memory, meaning that there is no empty space between the elements.
So when you compare two elements in the int array, you are comparing adjacent memory locations, and the comparison always gives the correct result.

On the other hand, char arrays are stored as individual characters, with each character taking up one byte of memory.
When you input a string with spaces, the spaces are also stored as characters, and they take up space in the memory.
This means that when you compare two characters in the char array, you may be comparing a character with a space character, which is not the same as comparing two alphabetic characters.

To avoid this issue, you should modify the code to ignore spaces and only count alphabetic characters.
One way to do this is to add a check inside the outer loop to skip
*/

// it  did for all and repeated...
void no_of_alpha(char *sen, int *count)
{
    for (int i = 0; sen[i]; i++)
    {
        for (int j = 0; sen[j]; j++)
        {
            if (sen[i] == sen[j])
            {
                count[i]++;
                continue;
            }
        }
    }
}

/*

    // output before.... reading all...
    /*
    enter the sentense: this is the sen

    cnt[0]= t ....2 times
    cnt[1]= h ....2 times
    cnt[2]= i ....2 times
    cnt[3]= s ....3 times
    cnt[4]=   ....3 times
    cnt[5]= i ....2 times
    cnt[6]= s ....3 times
    cnt[7]=   ....3 times
    cnt[8]= t ....2 times
    cnt[9]= h ....2 times
    cnt[10]= e ....2 times
    cnt[11]=   ....3 times
    cnt[12]= s ....3 times
    cnt[13]= e ....2 times
    cnt[14]= n ....1 times
    cnt[15]=
     ....1 times
    cnt[16]=  ....0 times
    cnt[17]=  ....0 times
    cnt[18]=  ....0 times
    cnt[19]=  ....0 times
    cnt[20]=  ....0 times
    cnt[21]=  ....0 times
    cnt[22]=  ....0 times
    cnt[23]=  ....0 times
    cnt[24]=  ....0 times
    cnt[25]=  ....0 times
    cnt[26]=  ....0 times
    cnt[27]=  ....0 times
    cnt[28]=  ....0 times
    cnt[29]=  ....0 times⏎
    */
