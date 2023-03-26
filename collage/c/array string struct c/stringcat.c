#include <stdio.h>
#include <string.h>
// char func_concat(char[], char[]);
// char *concatinate_wrong(char[], char[]);
void concatinate(char a[], char b[], char *ptr)
{
    int size = 0;
    char temp[40];
    for (int i = 0; a[i]; i++)
    {
        temp[size] = a[i];
        size++;
    }
    for (int i = 0; b[i]; i++)
    {
        temp[size++] = *(b + i);
    }
    temp[size] = '\0';
    strcpy(ptr, temp);
}

int main()
{
    char s1[20], s2[20], finl[40];
    printf("en the first tring: ");
    scanf("%s", s1);
    printf("en the 2nd tring: ");
    scanf("%s", s2); // using %[^\n] couldnot take input ..

    concatinate(s1, s2, finl);
    // char *f = concatinate_wrong(s1, s2);
    // strcpy(finl, f);
    // finl = func_concat(s1, s2);..... wrong
    printf("the final string is : %s", finl);
    return 0;
}

//! this is wrong ....
//? 'char', but it is expected to return a character array.
// char func_concat(char a[20], char b[20])
// {
//     int address = 0;
//     char result[40];
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         result[address] = a[i];
//         address++;
//     }
//     for (int j = 0; a[j] != '\0'; j++)
//     {
//         result[address] = a[j];
//         address++;
//     }
//     result[address] = '\0';
//     // printf("the added str is : %s",result);
//     return result[40]; //?unnessary...
//     return result;
// }

/*
char *concatinate_wrong(char *a, char *b)
{
    int size = 0;
    char *temp;
    for (int i = 0; a[i]; i++)
    {
        temp[size] = a[i];
        size++;
    }
    for (int i = 0; b[i]; i++)
    {
        temp[size++] = *(b + i);
    }
    temp[size] = '\0';
    // strcpy(ptr, temp); // still error...
    // return ptr;

    return temp; //! still erros
    //?cause: it returns a pointer to a local variable (result), which is allocated on the stack and gets destroyed once the function returns, thus making the returned pointer invalid.
    // todo: Instead, dynamic allocation using malloc or returning a static array would solve this problem.
}

/*

*/
/*dunamic version....*/
/*
Yes, using dynamic memory allocation with malloc or returning a static array can solve this problem.

Here's how to implement the same function correctly, with dynamic memory allocation using malloc():

char *func_concat(char a[], char b[])
{
    int lenA = strlen(a);
    int lenB = strlen(b);

    // +1 for the null character
    char *result = malloc((lenA + lenB + 1) * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int i = 0;
    while (*a != '\0') {
        result[i++] = *a++;
    }
    while (*b != '\0') {
        result[i++] = *b++;
    }

    result[i] = '\0';
    return result;
}
In this implementation, we allocate a block of memory sufficient for the concatenated string using malloc().
We then copy each character from the input strings a and b into the allocated memory.
Finally, we add a null terminating character to the end of the concatenated string.

When calling this function, you should remember to free the memory allocated by malloc() with free().
*/
