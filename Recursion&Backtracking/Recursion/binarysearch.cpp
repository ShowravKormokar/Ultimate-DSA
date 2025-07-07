#include <iostream>
using namespace std;

int bs(int arr[], int target, int start, int end)
{
    if (start <= end) // If start greater than end, that's means target out of range
    {
        int mid = start + (end - start) / 2; // Find mid ( Efficient way)

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] >= target)
            return bs(arr, target, start, mid - 1); // First Half of the array
        else if (arr[mid] <= target)
            return bs(arr, target, mid + 1, end); // Second half of the array
    }

    return -1; // If not match
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5}; // Array must be sorted

    cout << bs(arr, 6, 0, n - 1); // Target value 6. Show output index no.

    return 0;
}

// Time and Space complexity same as = O(log n)