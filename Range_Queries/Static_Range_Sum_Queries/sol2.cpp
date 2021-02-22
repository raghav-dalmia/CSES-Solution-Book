/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 16-10-2020,  3:24:58 pm IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long int

int getSum(vector<int> &ftree, int ind)
{
    if (ind < 0)
        return 0;

    ind++;
    int ans = 0;
    while (ind > 0)
    {
        ans += ftree[ind];
        ind -= ind & (-ind);
    }
    return ans;
}

void constructFT(int n, vector<int> &arr, vector<int> &ftree)
{
    for (int i = 0; i < n; i++)
    {
        int ind = i + 1;
        while (ind <= n)
        {
            ftree[ind] += arr[i];
            ind += ind & (-ind);
        }
    }
}

signed main( )
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    vector<int> ftree(n + 1, 0);
    constructFT(n, v, ftree);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (getSum(ftree, r - 1) - getSum(ftree, l - 2)) << endl;
    }
}