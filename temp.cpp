#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int s[n];
    int i = 0;
    s[i++] = 3;

    cout << s[i-1];
    i--;
    cout << s[i-1];

    return 0;
}