/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 07-10-2020, 12:16:42 am IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

void precompute(int n, string s, vector<int> &dp)
{
    // similar to KMP precompute on pattern string
    int i = 0, j = 1;
    while (j < n)
    {
        if (s[i] == s[j])
        {
            dp[j] = i + 1;
            i++;
            j++;
        }
        else
        {
            if (i == 0)
                j++;
            else
                i = dp[i - 1];
        }
    }
}

int main( )
{
    string s, p;
    cin >> s >> p;
    int n = s.length( );
    int m = p.length( );
    vector<int> dp(m, 0);

    precompute(m, p, dp);

    int i = 0, j = 0, ans = 0;
    while (i < n)
    {
        if (s[i] == p[j])
        {
            i++;
            j++;
            if (j == m)
            {
                ans++;
                j = dp[m - 1];
            }
        }
        else
        {
            if (j == 0)
                i++;
            else
                j = dp[j - 1];
        }
    }
    cout << ans;
}
