// c++ program to binary search on array using divide & conquer approach

// Time complexity: O(log n)
// Space Complexity: O(log n)

#include <iostream>
using namespace std;

// function to perform binary search using recursive approach
void recApp(int arr[], int key, int si, int ei)
{
    // if start index equals to end index function will stop
    if (si > ei)
    {
        cout << -1 << endl;
        return;
    }

    int mi = (si + ei) / 2;

    // key always compares with mid index value
    if (arr[mi] == key)
        cout << mi << endl;

    // if key is in left side drops right
    else if (arr[mi] > key)
        recApp(arr, key, si, mi - 1);

    // if key is in right side drops left
    else
        recApp(arr, key, mi + 1, ei);
}

// function to perform binary search using iterative approach
int itrApp(int arr[], int key, int si, int ei)
{

    // loop will stop when start index crosses end index
    while (si <= ei)
    {
        int mi = si + (ei - si) / 2;

        if (arr[mi] == key)
            return mi;

        else if (arr[mi] > key)
            ei = mi - 1;

        else
            si = mi + 1;
    }

    return -1;
}

// driver program to test above function
int main()
{
    int arr[7] = {8, 10, 12, 21, 27, 34, 42};
    int n = sizeof(arr);

    int key;
    cin >> key;

    recApp(arr, key, 0, n - 1);

    cout << itrApp(arr, key, 0, n - 1) << endl;
}