// Leetcode question: 322. Coin Change

#include <bits/stdc++.h>
using namespace std;

// recursive approach
int solveRec(vector<int> &coins, int amount)
{
    // base case
    if (amount == 0)
    {
        return 0;
    }

    if (amount < 0)
    {
        return INT_MAX;
    }

    int l = coins.size(), mini = INT_MAX;
    for (int i = 0; i < l; i++)
    {
        int ans = solveRec(coins, amount - coins[i]);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }

    return mini;
}

// recursive approach with memoization
int solveMem(vector<int> &coins, int amount, vector<int> &dp)
{
    // base case
    if (amount == 0)
        return 0;

    if (amount < 0)
        return INT_MAX;

    if (dp[amount] != -1)
    {
        return dp[amount];
    }

    int l = coins.size(), mini = INT_MAX;
    for (int i = 0; i < l; i++)
    {
        int ans = solveMem(coins, amount - coins[i], dp);
        if (ans != INT_MAX)
        {
            mini = min(mini, 1 + ans);
        }
    }

    dp[amount] = mini;

    return dp[amount];
}

// tabulation method
int solveTab(vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    int l = coins.size();
    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX)
            {
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }

    if (dp[amount] == INT_MAX)
        return -1;

    return dp[amount];
}

int main()
{
    vector<int> coins = {1, 2, 5};
    int amount = 11;

    // int ans = solveRec(coins, amount);

    vector<int> dp(amount + 1, -1);
    int ans = solveMem(coins, amount, dp);

    if (ans == INT_MAX)
    {
        return -1;
    }
    // cout << ans << endl;

    cout << solveTab(coins, amount);

    return 0;
}