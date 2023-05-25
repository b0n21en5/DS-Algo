// find out how many combinations can be made

// formula of combinations(nCr) is = n!/((n-r)!*r!)

#include <iostream>
using namespace std;

int fact(int num)
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
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    cout << (fact(n) / ((fact(n - r) * fact(r)))) << endl;

    return 0;
}