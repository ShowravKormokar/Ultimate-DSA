#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int result = n * factorial(n - 1); // Formula n*factorial(n-1)

    return result;
}

int main()
{
    int n;
    cout << "Enter an integer number: ";
    cin >> n; // Take user input

    cout << "The factorial is: " << factorial(n) << endl; // Call a fuction to calculate n!

    return 0;
}