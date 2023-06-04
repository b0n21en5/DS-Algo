// count 1's in binary form of a number

#include <iostream>
using namespace std;

int numberOfOnes(int n)
{
    int count = 0;

    while (n)
    {
        count++;

        // n & (n-1) will remove single 1 at one run
        // num of operation needs to make it
        // zero is the count of 1 in that num
        n = (n & (n - 1));
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << numberOfOnes(n) << endl
         << (1 << 2);

    return 0;
}