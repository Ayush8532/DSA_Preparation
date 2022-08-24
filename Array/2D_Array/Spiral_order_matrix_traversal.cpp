#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, x;
    cin >> row >> col;
    vector<vector<int>> v(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            v[i][j] = x;
        }
    }
    int row_start = 0, row_end = row - 1, col_start = 0, col_end = col - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {
            cout << v[row_start][i] << " ";
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++)
        {
            cout << v[i][col_end] << " ";
        }
        col_end--;
        if (row_end >= row_start)
        {
            for (int i = col_end; i >= col_start; i--)
            {
                cout << v[row_end][i] << " ";
            }
            row_end--;
        }
        if (col_end >= col_start)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                cout << v[i][col_start] << " ";
            }
            col_start++;
        }
    }
    return 0;
}
