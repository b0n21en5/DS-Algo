// c++ program to print array in spiral order traversal

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int row_st = 0, row_en = n - 1, col_st = 0, col_en = m - 1;

    while (row_st < row_en && col_st < col_en)
    {

        // for column start
        for (int col = col_st; col <= col_en; col++)
        {
            cout << a[row_st][col] << " ";
        }
        row_st++;

        // for row start
        for (int row = row_st; row <= row_en; row++)
        {
            cout << a[row][col_en] << " ";
        }
        col_en--;

        // for column end
        for (int col = col_en; col >= col_st; col--)
        {
            cout << a[row_en][col] << " ";
        }

        row_en--;

        // for row end
        for (int row = row_en; row >= row_st; row--)
        {
            cout << a[row][col_st] << " ";
        }
        col_st++;
    }
}
