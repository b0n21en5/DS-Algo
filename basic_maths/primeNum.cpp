// find prime num between a range of num1 & num2

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int num1, num2;
    cout << "Enter Two Nums: ";
    cin >> num1 >> num2;
    for (; num1 <= num2; num1++)
    {

        if (isPrime(num1))
            cout << num1 << " ";
    }
}