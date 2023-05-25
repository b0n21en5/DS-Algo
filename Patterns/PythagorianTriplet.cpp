// a pair of triplet pythagorian triplet when
// square of max(a,b,c) equals to sum of square of rest two num

#include <iostream>
using namespace std;

bool isPythagorian(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
        return true;
    return false;
}

int main()
{
    int a, b, c, temp = 0;
    bool flag = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    cout << (isPythagorian(a, b, c) ? "Pythagorian Triplet\n" : "not Pythagorian Triplet\n");
}