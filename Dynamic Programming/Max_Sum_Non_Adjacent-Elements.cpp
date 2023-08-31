// codestudio: max sum of non adjacent elements

#include <bits/stdc++.h>
using namespace std;

int memoiz(vector<int> &nums, int n, vector<int> &dp)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        nums[0];
    }

    if (dp[n] != -1)
    {
        return dp[0];
    }

    int incl = memoiz(nums, n - 2, dp) + nums[n];
    int excl = memoiz(nums, n - 1, dp);

    dp[n] = max(incl, excl);

    return dp[n];
}

int tabular(vector<int> &nums, int n)
{
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        int incl = dp[i - 2] + nums[i];
        int excl = dp[i - 1];
        dp[i] = max(incl, excl);
    }

    return dp[n - 1];
}

int main()
{
    vector<int> nums = {2, 1, 4, 9};
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    cout << memoiz(nums, n - 1, dp) << endl;
    cout << tabular(nums, n);
}