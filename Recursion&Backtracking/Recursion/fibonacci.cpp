#include <iostream>
using namespace std;

int fibonacci(int n)
{
    return (n == 0 || n == 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n; // Take user input

    cout << "The result is: " << fibonacci(n) << endl;

    return 0;
}