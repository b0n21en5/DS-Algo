// check if num is prime or not

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool flag = 1;
    cout << "Enter num: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime\n";
            flag = 0;
            break;
        }
    }
    cout << (flag ? "Prime Num" : "");

    return 0;
}