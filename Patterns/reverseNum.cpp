// reverse a num
// if 1234 return 4321

#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0;
    cout << "Enter num: ";
    cin >> n;
    while (n)
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    cout << reverse << endl;

    return 0;
}