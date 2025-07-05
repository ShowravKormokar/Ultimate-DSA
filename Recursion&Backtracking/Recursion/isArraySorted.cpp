#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int n)
{
    return (n == 0 || n == 1) ? true : (arr[n - 1] >= arr[n - 2] && isArraySorted(arr, n - 1));//Check by Ascending order
}

int main()
{
    int n = 5;
    // int arr[n] = {2, 4, 1, 3, 0};
    int arr[n] = {0,1,2,3,4};

    cout << "1 means true and 0 means false: " << isArraySorted(arr, n) << endl;
}