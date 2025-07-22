#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Showrav";

    unordered_map<char, int> freq;

    for (auto chr : str)
    {
        freq[chr]++;
    }

    cout << "The frequency of char's: \n";
    for (auto m : freq)
    {
        cout << m.first << "=" << m.second << endl;
    }
    return 0;
}