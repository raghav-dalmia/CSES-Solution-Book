/********************************************
 *                                          *
 *   author: Raghav Dalmia                  *
 *   updated on: 22-02-2021, 14:40:35 IST   *
 *                                          *
\*******************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s) mp[c]++;
    string out = "";
    int o = 0;
    char c;
    for (auto it : mp)
    {
        if (it.second % 2 == 1)
        {
            o++;
            c = it.first;
        }
        if (o > 1)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        out = out + string(it.second / 2, it.first);
    }
    cout << out;
    if (o == 1)
        cout << c;
    reverse(out.begin(), out.end());
    cout << out;
    return 0;
}
