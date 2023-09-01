// Leetcode: 198. House Robber

#include <bits/stdc++.h>
using namespace std;

int tabular(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    else if (n == 1)
        return nums[1];

    vector<int> dp(n);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
    }

    return dp[n - 1];
}

int main()
{
    vector<int> nums = {2, 7, 9, 3, 1};
    int ans = tabular(nums);

    cout << ans << endl;
}