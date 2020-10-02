/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 03-10-2020,  1:04:59 am IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

int main( )
{
    int n;
    cin >> n;
    int v[n + 1];
    memset(v, 0, sizeof(v));
    cin >> v[1];
    int ans = 1, mi = v[1];
    for (int i = 1; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > v[ans])
        {
            ans++;
            v[ans] = num;
        }
        else if (num < mi)
        {
            mi = v[1] = num;
        }
        else
        {
            int pos = upper_bound(v + 1, v + ans + 1, num) - v;
            if (v[pos - 1] < num)
                v[pos] = min(v[pos], num);
        }
    }
    cout << ans;
    return 0;
}
