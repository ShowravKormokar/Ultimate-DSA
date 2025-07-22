#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    for (int r = 1; r <= n; r++)
    {
        for (int c = 0; c < r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
/*---Output:
 *
 **
 ***
 ****
 *****
 ---*/