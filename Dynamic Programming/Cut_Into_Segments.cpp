// Codestudio: cut into segments

#include <bits/stdc++.h>
using namespace std;

int topDown(int n, int x, int y, int z, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int a = topDown(n - x, x, y, z, dp) + 1;
    int b = topDown(n - y, x, y, z, dp) + 1;
    int c = topDown(n - z, x, y, z, dp) + 1;

    dp[n] = max(a, max(b, c));

    return dp[n];
}

int tabular(int n, int x, int y, int z)
{
    vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i - x >= 0)
        {
            dp[i] = max(dp[i], dp[i - x] + 1);
        }
        if (i - y >= 0)
        {
            dp[i] = max(dp[i], dp[i - y] + 1);
        }
        if (i - z >= 0)
        {
            dp[i] = max(dp[i], dp[i - z] + 1);
        }
    }

    if (dp[n] < 0)
        return 0;

    return dp[n];
}

int main()
{
    int n = 9;
    int x = 5;
    int y = 1;
    int z = 4;

    vector<int> dp(n + 1, -1);
    int topDownAns = topDown(n, x, y, z, dp);
    if (topDownAns < 0)
    {
        cout << 0 << endl;
    }
    cout << topDownAns << endl;

    cout << tabular(n, x, y, z) << endl;
}