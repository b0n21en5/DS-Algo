// c++ program to convert binary to decimal

#include <iostream>
using namespace std;

// function to convert binary to decimal
void binToDec(int binVal)
{
    int dec_val = 0;

    // initializing base to 1 i.e. 2^1
    int base = 1;

    while (binVal)
    {
        // extracting last digit
        int lastDigit = binVal % 10;

        // multiplying last digit with base and
        // adding it to dec_val
        dec_val += lastDigit * base;

        // incrementing base by power
        base *= 2;

        // storing quotient after dividing by 10
        binVal /= 10;
    }

    cout << dec_val << endl;
}

// driver program to test above function
int main()
{
    int binVal;
    cin >> binVal;

    binToDec(binVal);

    return 0;
}