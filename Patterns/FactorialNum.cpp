// find out factorial of n

#include <iostream>
using namespace std;

int recursiveFactorial(int num)
{
    if (num == 0)
        return 1;

    return num * recursiveFactorial(num - 1);
}

int main()
{
    int n;
    cout << "Enter Num: ";
    cin >> n;

    cout << recursiveFactorial(n) << endl;
    return 0;
}