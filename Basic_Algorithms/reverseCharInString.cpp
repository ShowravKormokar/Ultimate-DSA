// Reverse char in a string
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Showrav Kormokar";
    int size = str.size();

    // Reverse using in-built function
    // reverse(str.begin(), str.end());

    // To reverse by using two-pointer (in-place), help without using extra space
    int i = 0, j = size - 1;
    while (i < j)
    {
        // Manually swapping
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        // Use in-built function to swap
        // swap(str[i], str[j]);
        i++;
        j--;
    }

    cout << str;
}

// TC: O(n), SC: O(1)