// c++ program to get maximum positive sub array sum

#include <bits/stdc++.h>
using namespace std;

// using brute force approach with O(n^3)
void bruteForceApp(int arr[], int n)
{

    int mxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            mxSum = max(mxSum, sum);
        }
    }

    cout << mxSum << endl;
}

// optimised brute force approach with O(n^2)
void optBruteForce(int arr[], int n)
{
    int currSum[n + 1];
    currSum[0] = 0;
    for (int i = 0; i < n; i++)
    {
        currSum[i + 1] = currSum[i] + arr[i];
    }

    int maxSum = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum << endl;
}

// kadanes algorithm with O(n)
void kadanesAlgo(int arr[], int n)
{
    int currSum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];

        // if current sum is negative make it 0
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum << endl;
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bruteForceApp(a, n);
    optBruteForce(a, n);
    kadanesAlgo(a, n);
}