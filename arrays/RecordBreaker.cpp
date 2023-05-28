// c++ program to determine how many record breaking days
// in a park of visitors based on some conditions

// Time complexity: O(n)

#include <iostream>
using namespace std;

// function to count num of record breaking days
int recordBreaker(int arr[], int n)
{

    // 1st day will be record breaking day if n is 1
    if (n == 1)
        return 1;

    // mx variable will store maximum value
    int mx = -1;

    // ans variable will store num of days
    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // if current day visitor is greater than all
        // previous day visitor & the following day visitor
        // then its a record breaking day
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }

        mx = max(arr[i], mx);
    }

    return ans;
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

    cout << recordBreaker(arr, n) << " Record Breaking Days" << endl;
}
