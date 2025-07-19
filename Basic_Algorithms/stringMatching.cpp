#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Showrav";
    string str2 = "Showrav ";

    // Most shortcut method
    // bool flag = (str1 == str2); // compare every point in a string
    // cout << flag << endl;       // 1

    // Another method
    bool flag = false;
    int i = 0;
    while (str1.size() == str2.size() && str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
        i++;
    }
    cout << flag; // 0, because str2 end position have space so string didn't match

    return 0;
}