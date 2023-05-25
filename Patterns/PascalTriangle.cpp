// pascal triangle looks
// when n=5
// 1
// 11
// 121
// 1331
// 14641

// using nCr(combinations) formula

#include <iostream>
using namespace std;

int fact(int num)
{
    int dp[num + 2];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        dp[i] = i * dp[i - 1];
    }
    return dp[num];
}

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (fact(i) / (fact(i - j) * fact(j))) << " ";
        }
        cout << endl;
    }
}