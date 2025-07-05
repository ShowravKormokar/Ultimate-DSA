#include <iostream>
using namespace std;

int sumOfNs(int n)
{
    int sum = 0; // Initialization to store sum
    if (n == 0)
    {
        return sum;
    }
    sum = n + sumOfNs(n - 1); // sum current and it's lower number
}

int main()
{
    int n;
    cout << "Enter an enteger number: ";
    cin >> n; // Take user input

    cout << "The summation is : " << sumOfNs(n) << endl; //Show result

    return 0;
}