// c++ program to find largest word in a sentence

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    // character array
    char ar[n + 1];
    cin.getline(ar, n);
    cin.ignore();

    int currLen = 0, maxLen = 0;
    int i = 0;
    int st = 0, en = 0;
    while (1)
    {
        if (ar[i] == ' ' || ar[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                en = st;
            }

            st = i + 1;
            currLen = 0;
        }
        else
        {
            currLen++;
        }

        if (ar[i] == '\0')
            break;
        i++;
    }

    cout << maxLen << endl;

    for (int i = 0; i < maxLen; i++)
        cout << ar[i + en];

    return 0;
}