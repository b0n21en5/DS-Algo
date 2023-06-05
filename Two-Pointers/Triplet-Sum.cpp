// c++ program to find triplet sum using two pointers with array

// Time complexity: O(n^2)

#include <iostream>
using namespace std;

bool tripletSum(int a[], int n, int sum)
{

    for (int i = 0; i < n; i++)
    {

        // lo and hi two variables are using
        // as two pointers here
        int lo = i + 1, hi = n - 1;

        while (lo < hi)
        {
            int currSum = a[i] + a[lo] + a[hi];

            // if current sum is equal to sum
            // return true as triplet sum found
            if (currSum == sum)
            {
                return true;
            }

            // if current sum is less than sum
            // increase first pointer
            else if (currSum < sum)
            {
                lo++;
            }

            // if current sum is greater than sum
            // decrease second pointer
            else
            {
                hi--;
            }
        }
    }

    // if there are no such triplet sum return false
    return false;
}

int main()
{
    int n, sum;
    cin >> n >> sum;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << tripletSum(a, n, sum) << endl;
}