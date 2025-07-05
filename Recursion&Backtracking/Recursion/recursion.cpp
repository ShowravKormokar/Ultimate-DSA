#include <iostream>
using namespace std;

void printNum(int n)
{
    if (n == 0)
        return; // Base case, to stop this function

    cout << n << endl;
    printNum(n - 1); // Call a function itself
}

int main()
{
    int n = 5;
    // Call a function to print number decsending order
    printNum(n);

    return 0;
}