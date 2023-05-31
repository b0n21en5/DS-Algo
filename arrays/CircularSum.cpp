// c++ program to find maximum circular sub array sum

#include <bits/stdc++.h>
using namespace std;

// function to get maximum subarray sum using kadanes algorithm
int kadanesSum(int a[], int n)
{
    int sum = 0, mxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        sum += a[i];

        if (sum < 0)
        {
            sum = 0;
        }
        mxSum = max(mxSum, sum);
    }

    return mxSum;
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // nowrapsum = maxSubarraySum before converting
    int noWrapSum = kadanesSum(arr, n);

    // sum variable will store sum of the array
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        // converting neg into pos and pos into neg
        // integers after taking sum
        arr[i] = -arr[i];
    }

    // wrapsum = sum - (-maxSubarraySum);
    int wrapSum = sum + kadanesSum(arr, n);

    cout << max(wrapSum, noWrapSum) << endl;
}