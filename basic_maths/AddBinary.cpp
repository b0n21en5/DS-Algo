// c++ program to add two binary numbers

#include <iostream>
using namespace std;

// function to reverse any number
int reverse(int num)
{
    int ans = 0;

    while (num)
    {
        int lastDigit = num % 10;
        ans = ans * 10 + lastDigit;
        num /= 10;
    }

    return ans;
}

// function to add two binary number
int addBinary(int fstNum, int lstNum)
{
    int ans = 0;
    int prevCarry = 0;

    while (fstNum && lstNum)
    {

        if (fstNum % 2 == 0 && lstNum % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if (fstNum % 2 == 1 && lstNum % 2 == 0 || fstNum % 2 == 0 && lstNum % 2 == 1)
        {
            if (prevCarry)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }

        fstNum /= 10;
        lstNum /= 10;
    }

    while (fstNum)
    {
        if (prevCarry)
        {
            if (fstNum % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (fstNum % 2);
        }
        fstNum /= 10;
    }

    while (lstNum)
    {
        if (prevCarry)
        {
            if (lstNum % 2 == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (lstNum % 2);
        }
        lstNum /= 10;
    }

    if (prevCarry)
    {
        ans = ans * 10 + 1;
    }

    ans = reverse(ans);
    return ans;
}

// driver code
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout << addBinary(num1, num2) << endl;
}