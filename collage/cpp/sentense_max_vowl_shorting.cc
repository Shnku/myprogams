#include <iostream>
#include <cstring>
using namespace std;
void disp_arr(char[]);

// char themain[5][30] = {"this is the sntns"};
char themain[10][20];
int main_key = 0;
int main()
{
    // cout << sntns[0][0] << '\n';
    // cout << sntns[0];
    // cout << sizeof(sntns);
    char sntns[100], word[15];
    int key_sn, wrd_key;
    cout << "entr the sntns: ";
    cin.getline(sntns, 100);
    // for (int key_sn = 0; key_sn < sntns[key_sn] != '\0'; key_sn++)
    // cout << sntns[key_sn];

    key_sn = 0;
    while (sntns[key_sn] != '\0')
    {
        wrd_key = 0;
        while (true)
        {
            printf("\nsntns[key_sn] == ' '==%c || sntns[key_sn] == 0==%c\n", sntns[key_sn], sntns[key_sn]);

            if (sntns[key_sn] == ' ' || sntns[key_sn] == '\0')
            {
                break;
            }
            word[wrd_key++] = sntns[key_sn++];
        }
        word[wrd_key] = '\0';
        strcpy(themain[main_key++], word);

        disp_arr(themain);

        if (sntns[key_sn] != '\0')
        {
            key_sn++;
        }
    }

    return 0;
}
void disp_arr(char arr2d[10][20])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; arr2d[i][j] != '\0'; j++)
        {
            cout << "\nthe sentense:" << arr2d[i][j];
        }
    }
}