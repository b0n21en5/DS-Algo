// set contains only unique elements

#include <iostream>
#include <set>
using namespace std;

int main()
{

    // creating a set of characters
    set<char> s1;

    // inserting elements into set
    s1.insert('z');
    s1.insert('z');

    s1.insert('d');
    s1.insert('d');

    s1.insert('c');
    s1.insert('c');

    s1.insert('a');
    s1.insert('a');

    // iterating
    for (auto i : s1)
    {
        cout << i << ' ';
    }
    return 0;
}