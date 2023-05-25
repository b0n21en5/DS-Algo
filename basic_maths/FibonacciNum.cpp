#include <iostream>
using namespace std;

// will return n'th fibonacci num
int recursiveApproach(int num)
{
    if (num <= 1)
        return num;

    return recursiveApproach(num - 2) + recursiveApproach(num - 1);
}

// will print n'th fibonacci series
void iterativeApproach(int num)
{
    int t1 = 0;
    int t2 = 1, nextTerm;
    cout << "Fibonacci series of " << num << " is ";
    for (int i = 0; i <= num; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

// dynamic programming approach
int DynamicApproach(int num)
{
    int dp[num + 2];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[num];
}

int main()
{
    int num;
    cout << "Enter num:";
    cin >> num;

    // iterative approach invocation
    iterativeApproach(num);

    // recursive approach invocation
    cout << endl
         << "Fibonacci of " << num << " is " << recursiveApproach(num);

    // dynamic approach invocation
    cout << endl
         << "Fibonacci of " << num << " is " << DynamicApproach(num);
}