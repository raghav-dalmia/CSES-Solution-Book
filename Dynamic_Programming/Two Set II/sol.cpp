/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 02-10-2020, 11:15:18 pm IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int mod = (1e9) + 7;

int add(int a, int b) { return ((a % mod) + (b % mod)) % mod; }
int mul(int a, int b) { return ((a % mod) * (b % mod)) % mod; }

signed main( )
{
    int n;
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    if (sum & 1)
        cout << '0';
    else
    {
        vector<int> dp(sum + 1, 0);
        dp[0] = 1;
        int ma = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = ma; j >= 0; j--) dp[j + i] = add(dp[j + i], dp[j]);
            ma += i;
        }
        cout << mul(dp[sum / 2], 500000004);
    }
    return 0;
}
