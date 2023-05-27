// c++ program of selection sort to sort an array

// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// function to perform selection sort on the array
void selectionSort(int arr[], int n)
{

    // outer loop will run from 1 to n
    for (int i = 0; i < n; i++)
    {
        // inner loop will run from i+1 to n
        for (int j = i + 1; j < n; j++)
        {
            // if j'th value is less than i'th value
            // both swap values
            if (arr[j] < arr[i])
            {
                // swapping values
                swap(arr[j], arr[i]);
            }
        }
    }
}

// function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// driver code
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    printArray(arr, n);
}