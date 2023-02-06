#include <iostream>
#include <cstring>
using namespace std;

char ans[] = {'c', 'a', 'c', 'b', 'd', '\0'};

int main()
{
    char s[4][6]{
        // 6 cause contains null
        "abcda",
        "bcdaa",
        "bdcac",
        "cadba",
    };
    // int len = strlen(s);
    int stu_no = 4, qus_no = 6, count = 0;
    // cout<<stu_no;
    int marks[stu_no];
    for (int i = 0; i < stu_no; i++)
    {
        for (int j = 0; j < qus_no; j++)
        {
            if (s[i][j] == ans[j])
            {
                // marks[i]++;
                count++;
            }
        }
        marks[i] = count;
    }

    for (int k = 0; k < stu_no; k++)
    {
        cout << marks[k] << endl;
    }

    return 0;
}