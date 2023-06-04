// qs. Maximum number of 2x2 squares that can be fit
// inside a right Isosceles Triangle

#include <bits/stdc++.h>
using namespace std;

int maxSquare(int base)
{

    // decreasing 2 unit from height and base
    // as we can't fit squares there
    base = base - 2;

    // since each square has base of
    // length of 2
    base = floor(base / 2);

    return base * (base + 1) / 2;
}

// Driver Code
int main()
{
    int base;
    cin >> base;

    cout << maxSquare(base) << endl;
}