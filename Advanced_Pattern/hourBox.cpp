#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++) // Left space
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (n - i) - 1; j++) // Star
        {
            cout << "*";
        }
        for (int k = 1; k <= i; k++) // Right space
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int k = 1; k <= i; k++) // Left space
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (n - i) - 1; j++) // Star
        {
            cout << "*";
        }
        for (int k = 1; k <= i; k++) // Right space
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
*******
_*****_
__***__
___*___
__***__
_*****_
*******
*/