// c++ program to find smallest positive
// missing number from the array

// Time Complexity: O(n)

#include <iostream>
using namespace std;

// function to find smallest
// positive missing number
void smallPosMiss(int arr[], int n)
{

    const int N = 1e6;
    bool idx[N];
    for (int i = 0; i < N; i++)
        idx[i] = 0;

    for (int i = 0; i < n; i++)
    {
        // if current value is positive make true
        // in corresponding index in idx array
        if (arr[i] >= 0)
            idx[arr[i]] = 1;
    }

    for (int i = 0; i < N; i++)
    {
        // first value which is false print that
        if (idx[i] == false)
        {
            cout << i << endl;
            break;
        }
    }
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    smallPosMiss(arr, n);
}