// c++ program to identify the minimum
// index of first repeated num

// Time complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    const int N = 1e5;

    int idx[N];

    // idx array to store index of each value
    for (int i = 0; i < N; i++)
        idx[i] = -1;

    // minidx variable will store
    // repeated value's minimum index
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        // if there is repeated num then
        // add first index to minidx
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }

        // if index is not added to
        // idx array this will add it
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minidx == -1)
    {
        std::cout << "-1" << std::endl;
    }
    else
    {
        std::cout << minidx + 1 << std::endl;
    }

    return 0;
}