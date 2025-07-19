#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Showrav";
    string str2 = "Showrav";

    // Most shortcut method
    bool flag = (str1 == str2); // compare every point in a string
    cout << flag << endl;       // 1

    // Another method
    // bool flag=false;
    // while(str1.size() == str2.size() && !str.end())
    // {
    //     if (str1[i] == str2[i]) // Ignore upper/lower case
    //     {
    //         flag = false;
    //         break;
    //     }
    // }
    // cout << flag; // 0, because str2 end position have space so string didn't match

    return 0;
}