/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 02-10-2020, 10:39:34 pm IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

int main( )
{
    int n;
    cin >> n;
    vector<bool> dp((n * 1000) + 1, 0);
    dp[0] = 1;
    set<int> ans;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        int coin;
        cin >> coin;
        for (int j = ma; j >= 0; j--)
        {
            if (dp[j])
            {
                dp[j + coin] = 1;
                ans.insert(j + coin);
            }
        }
        ma += coin;
    }
    cout << ans.size( ) << '\n';
    for (int a : ans) cout << a << ' ';
    return 0;
}
