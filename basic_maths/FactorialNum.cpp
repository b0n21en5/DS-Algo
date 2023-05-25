// find out factorial of n

#include <iostream>
using namespace std;

int recursiveFactorial(int num)
{
    if (num == 0)
        return 1;

    return num * recursiveFactorial(num - 1);
}

int dynamicApproach(int num)
{
    int dp[num + 2];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        dp[i] = dp[i - 1] * i;
    }
    return dp[num];
}

int main()
{
    int n;
    cout << "Enter Num: ";
    cin >> n;

    cout << "Factorial of " << n << " using Recursive approach is " << recursiveFactorial(n) << endl;

    cout << "Factorial of " << n << " using Dynamic approach is " << dynamicApproach(n) << endl;

    return 0;
}