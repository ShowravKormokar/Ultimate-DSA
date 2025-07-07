#include <iostream>
using namespace std;

void print(int subset[], int n)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        cout << subset[i] << " ";
    }
    cout << "}" << endl;
}

void printSubsets(int arr[], int subset[], int i, int n, int subsetSize)
{
    if (i == n)
    {
        print(subset, subsetSize);
        return;
    }

    // Include current element
    subset[subsetSize] = arr[i];
    printSubsets(arr, subset, i + 1, n, subsetSize + 1);

    // Exclude current element
    printSubsets(arr, subset, i + 1, n, subsetSize);
}

int main()
{
    int n = 3, i = 0;
    int arr[n] = {1, 2, 3};
    int subset[n];

    printSubsets(arr, subset, i, n, 0);

    return 0;
}