#include <bits/stdc++.h>
using namespace std;

void multiplyMatrix(vector<vector<int>> &matrix1, int r1, int c1, vector<vector<int>> &matrix2, int r2, int c2)
{
    if (c1 == r2)
    {
        // Store matrix result
        vector<vector<int>> result(r1, vector<int>(c2));

        // Multiply using transpose
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < r2; k++)
                {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
                // Print matrix after multiplication
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid matrix order." << endl;
    }
}

int main()
{
    // Input size
    int r1, r2, c1, c2;
    cout << "Enter 1st matrix size row and column: ";
    cin >> r1 >> c1;
    cout << "Enter 2nd matrix size row and column: ";
    cin >> r2 >> c2;

    // Declaration vector
    vector<vector<int>> matrix1(r1, vector<int>(c1));
    vector<vector<int>> matrix2(r2, vector<int>(c2));

    // 1st matrix value input
    cout << "Enter 1st matrix value" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "[" << i << "][" << j << "] = ";
            cin >> matrix1[i][j];
        }
    }

    // 2nd matrix value input
    cout << "Enter 2nd matrix value" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "[" << i << "][" << j << "]= ";
            cin >> matrix2[i][j];
        }
    }

    multiplyMatrix(matrix1, r1, c1, matrix2, r2, c2);

    return 0;
}