#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    string s;
    while (cin >> s && s != "end")
    {
        mp[s]++;
    }
    for (auto [word, count] : mp)
    {
        cout << word << ":" << count << endl;
    }
    return 0;
}