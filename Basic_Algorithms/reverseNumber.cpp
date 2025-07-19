#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 25893;
    int reverse = 0;

    while (num > 0)
    {
        int digit = num % 10;           // Get last digit
        reverse = reverse * 10 + digit; // Append digit
        num /= 10;                      // Remove last digit
    }

    cout << reverse << endl;
    return 0;
}