#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ar[n + 1];
    cin >> ar;

    bool palin = 1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != ar[n - i - 1])
            palin = 0;
    }

    if (palin)
        cout << "It's a Palindrome\n";
    else
        cout << "It's not a Palindrome\n";
}