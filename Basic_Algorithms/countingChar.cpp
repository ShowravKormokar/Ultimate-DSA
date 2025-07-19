#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Showrav Kormokar";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++; // count with whitespaces
    }

    cout << "Count with whitespaces: " << count << endl;

    int count2 = 0;
    for (auto c : str)
    {
        if (c != ' ')
            count2++; // count without whitespaces
    }

    cout << "No. of char (without whitespace): " << count2 << endl;

    return 0;
}