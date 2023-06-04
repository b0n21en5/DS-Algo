#include <iostream>
using namespace std;

// n=4
// bit of n=100 and n-1=011
// n & (n-1) = 0000
// which signifies that it's a power of two
// !(n & (n-1)) will return bool value

bool ispowerof2(int n)
{
    return (n && !(n & (n - 1)));
}

int main()
{
    cout << ispowerof2(6) << endl;
}