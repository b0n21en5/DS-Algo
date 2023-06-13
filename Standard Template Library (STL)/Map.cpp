#include <iostream>
#include <map>
using namespace std;

int main()
{

    // creating a mapof integer & char
    map<int, char> mp = {{1, 'a'}, {2, 'b'}, {3, 'c'}};

    // value insertions
    mp[4] = 'd';
    mp[5] = 'e';

    // map iterations - way 1
    for (auto it = mp.begin(); it != mp.end(); ++it)
        cout << it->first << " " << it->second << endl;

    // map iterations - way 2
    for (auto itr : mp)
        cout << itr.first << " " << itr.second << endl;
}