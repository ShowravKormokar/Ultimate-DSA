#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    for (int r = 0; r < n; r++)
    {
        for (int s = 0; s < n - r - 1; s++)
        {
            cout << " "; // Spaces
        }
        for (int k = 0; k <= r; k++)
        {
            cout << "*"; // Star
        }
        cout << endl;
    }
    return 0;
}
/*
____*
___**
__***
_****
*****
*/