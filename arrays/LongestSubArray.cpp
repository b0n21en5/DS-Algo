// c++ program to find longest arthmetic subarray

#include <iostream>
using namespace std;

// function to return longest
// subarray forming AP
int getMaxLength(int arr[], int n)
{

    // single number is also an AP
    // with common difference as 0
    if (n == 1)
        return 1;

    // stores the common
    // defference of current Ap
    int prevDiff = arr[1] - arr[0];

    // minimum possible length of
    // required subarray is 2
    int ans = 2;

    // stores length of current subarray
    int curr = 2;

    for (int i = 2; i < 8; i++)
    {
        // if common differences
        // are found to be equal
        if (prevDiff == arr[i] - arr[i - 1])
        {
            // continue with the
            // previous subarray
            curr++;
        }

        // start a new subarray
        else
        {
            prevDiff = arr[i] - arr[i - 1];
            curr = 2;
        }

        // update the length to
        // store the maximum length
        ans = max(ans, curr);
    }

    // return the length of
    // the longest subarray
    return ans;
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << getMaxLength(arr, n) << endl;
}