/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 06-10-2020, 11:56:01 pm IST   *
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
    string s;
    cin >> s;
    int n = s.length( );
    vector<int> dp(n, 0);

    precompute(n, s, dp);

    int i = n - 1;
    vector<int> ans;
    while (i > 0 && dp[i] > 0)
    {
        ans.push_back(dp[i]);
        i = dp[i] - 1;
    }
    reverse(ans.begin( ), ans.end( ));
    for (int i : ans) cout << i << " ";
}
