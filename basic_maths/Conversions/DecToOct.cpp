// c++ program to convert decTecim to octal

#include <iostream>
#include <vector>
using namespace std;

// function to convert decimal to octal
void decToOct(int num)
{
    // vector oct to store remainder
    vector<int> oct_val;

    while (num)
    {
        // rem variable to store remainder
        int rem = num % 8;

        // adding remainder in vector
        oct_val.push_back(rem);

        num /= 8;
    }

    // iterating vector in reverse order from last to first
    for (auto itr = oct_val.rbegin(); itr != oct_val.rend(); itr++)
        cout << *itr;
}

// driver code
int main()
{
    int num;
    cin >> num;

    decToOct(num);

    return 0;
}