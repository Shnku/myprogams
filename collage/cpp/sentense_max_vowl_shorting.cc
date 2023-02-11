#include <iostream>
#include <cstring>
using namespace std;

// char sentense[5][30] = {"this is the sntns"};
char sentense[10][20];
int main()
{
    // cout << sntns[0][0] << '\n';
    // cout << sntns[0];
    // cout << sizeof(sntns);
    char sntns[100], word[15];
    int key_sn, wrd_key, main_key;
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
        strcpy(sentense[main_key++], word);
        if (sntns[key_sn] != '\0')
        {
            key_sn++;
        }
    }

    return 0;
}