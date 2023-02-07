#include <iostream>
#include <cstring>
using namespace std;

char ans[] = {'c', 'a', 'c', 'b', 'd'};

int main()
{
    char s[4][6]{
        // 6 cause contains null
        "abcda",
        "bcdaa",
        "bdcac",
        "cadba",
    };
    // int len = strlen(s); //!not working...
    // problem //? arrgument of type "char (*)[6]" is incompatible with parameter of type "const char ....
    // int len = strlen(s[4]); //! not working...note:
    // problem //?at offset 24 into source object 's' of size 24 ..char s[4][6]......
    // cout << len << endl;

    int stu_no = 4, qus_no = 6 - 1;
    int marks[stu_no] = {0, 0, 0, 0}; //! init important..
    // else contains garbage value....
    for (int i = 0; i < stu_no; i++)
    {
        for (int j = 0; j < qus_no; j++)
        {
            if (s[i][j] == ans[j])
            {
                printf("\ns[%d][%d]=ans[%d] // (%c == %c)", i, j, j, s[i][j], ans[j]);
                marks[i]++;
                printf("\tmarks[%d]=%d", i, marks[i]);
            }
        }
        printf("\n");
    }

    cout << "\n\n.........students marks ............";
    for (int k = 0; k < stu_no; k++)
    {
        cout << "\nmarks of student" << k + 1 << " is:= " << marks[k] << endl;
    }

    return 0;
}

/*output
//!if use the loop for qustion <6 it compares the '\0' ...
s[0][2]=ans[2] // (c == c)      marks[0]=1
s[0][5]=ans[5] // !( == )        marks[0]=2

s[1][5]=ans[5] // !( == )        marks[1]=1

s[2][2]=ans[2] // (c == c)      marks[2]=1
s[2][5]=ans[5] // !( == )        marks[2]=2

s[3][0]=ans[0] // (c == c)      marks[3]=1
s[3][1]=ans[1] // (a == a)      marks[3]=2
s[3][3]=ans[3] // (b == b)      marks[3]=3
s[3][5]=ans[5] // !( == )        marks[3]=4

.........students marks ............
marks of student1 is:= 2
marks of student2 is:= 1
marks of student3 is:= 2
marks of student4 is:= 4
*/