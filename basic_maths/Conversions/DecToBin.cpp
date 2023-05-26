// c++ program to convert decimal number to binary

#include <iostream>
#include <vector>
using namespace std;

// function to convert decimal to binary
void decToBin(int decVal)
{
    // bin_val vector to store binary value
    vector<int> bin_val;

    while (decVal)
    {
        // rem variable to store remainder
        int rem = decVal % 2;

        // adding remainder to vector
        bin_val.push_back(rem);

        decVal /= 2;
    }

    // iterating vector in reverse order
    for (auto itr = bin_val.rbegin(); itr != bin_val.rend(); itr++)
        cout << *itr;
}

// driver program to test above function
int main()
{
    int decVal;
    cin >> decVal;

    decToBin(decVal);

    return 0;
}