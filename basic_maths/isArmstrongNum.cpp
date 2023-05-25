// check if num is armstrong sum

// An Armstrong number is one whose sum of digits raised
// to the power three equals the number itself. i.e. 1, 153, 370, 371, 1634

// 371, is an Armstrong number because 3**3 + 7**3 + 1**3 = 371.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    cout << "Enter num: ";
    cin >> num;
    int originalNum = num;
    int numDigits = log10(num) + 1;
    while (num)
    {
        int lastDigit = num % 10;
        sum += pow(lastDigit, numDigits);
        num = num / 10;
    }
    cout << (sum == originalNum ? "ArmStrong Num\n" : "Not ArmStrong\n");

    return 0;
}