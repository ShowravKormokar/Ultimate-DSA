#include <iostream>
using namespace std;

int sumOfNs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumOfNs(n - 1); // sum current and it's lower number
}

int main()
{
    int n;
    cout << "Enter an enteger number: ";
    cin >> n; // Take user input

    cout << "The summation is : " << sumOfNs(n) << endl; // Show result

    return 0;
}