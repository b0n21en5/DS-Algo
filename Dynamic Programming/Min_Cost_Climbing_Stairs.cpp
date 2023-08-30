// Leetcode Qs: 746. Min Cost Climbing Stairs

#include <bits/stdc++.h>
using namespace std;

// Top Down - Recursive Approach with Memoization
int topDown(vector<int> &cost, int n, vector<int> &dp)
{
    if (n == 0)
        return cost[0];

    if (n == 1)
        return cost[1];

    if (dp[n] != -1)
        return dp[n];

    dp[n] = cost[n] + min(topDown(cost, n - 1, dp), topDown(cost, n - 2, dp));
    return dp[n];
}

// Bottom Up - Tabulation Approach
int bottomUp(vector<int> &cost, int n)
{
    vector<int> dp(n + 1);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < n; i++)
    {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    return min(dp[n - 1], dp[n - 2]);
}

// tabulation method with space optimization
int bottomUpSpOpt(vector<int> &cost, int n)
{
    int prev2 = cost[0];
    int prev1 = cost[1];
    for (int i = 2; i < n; i++)
    {
        int temp = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = temp;
    }

    return min(prev1, prev2);
}

int main()
{

    vector<int> cost = {10, 15, 20};

    int n = cost.size();

    vector<int> dp(n + 1, -1);

    int ans = min(topDown(cost, n - 1, dp), topDown(cost, n - 2, dp));
    cout << ans;

    cout << endl
         << bottomUp(cost, n) << endl;

    cout << bottomUpSpOpt(cost, n);

    return 0;
}