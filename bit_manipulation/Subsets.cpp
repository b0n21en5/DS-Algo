#include <iostream>
using namespace std;

// this function will print subsets of an array
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    subsets(arr, 5);
}