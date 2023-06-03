// c++ program to find if required pair sum exists in the array

#include <bits/stdc++.h>
using namespace std;

// brute force approach with time complexity O(n^2)
bool bruteForce1(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                return true;
            }
        }
    }
    return false;
}

// optimised approach with time complexity O(n)
bool optApp(int a[], int n, int k)
{
    // sorting is necessary for this approach
    sort(a, a + n);
    int low = 0, high = n - 1;

    // loop will run for all elements
    while (low < high)
    {
        if (a[low] + a[high] == k)
            return true;

        // if sum is lesser increase low
        else if (a[low] + a[high] < k)
            low++;

        // if sum is greater decrease high
        else
            high--;
    }

    // if there are no such pair return false
    return false;
}

// Driver code
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Pair Sum of " << k << " is " << (bruteForce1(a, n, k) ? "" : "Not ") << "Present\n";
    cout << "Pair Sum of " << k << " is " << (optApp(a, n, k) ? "" : "Not ") << "Present\n";
}