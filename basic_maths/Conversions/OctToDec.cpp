// c++ program to convert octal number to Decimal

#include <iostream>
using namespace std;

// function  to convert octal to decimal
void octToDec(int octVal)
{
    // ans variable to store final octimal value
    int ans = 0;

    // initializing base value to 1 i.e. 8^0
    int base = 1;

    while (octVal)
    {
        // extracting last digit from octal number
        int lastDigit = octVal % 10;

        // multiplying last digit with appropriate
        // base value and adding it to ans
        ans += lastDigit * base;

        // incrementing base by power
        base *= 8;

        // storing quotient after diving by 10
        octVal /= 10;
    }

    cout << ans << endl;
}

// driver program to test above function
int main()
{
    // num variable to store octal value
    int num;
    cin >> num;

    octToDec(num);
}