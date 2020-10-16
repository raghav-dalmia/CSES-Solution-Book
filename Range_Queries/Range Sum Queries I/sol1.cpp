/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 16-10-2020,  2:52:06 pm IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

int getSum(vector<int> &stree, int s, int e, int qs, int qe, int ind)
{
    if (qs <= s && qe >= e)
        return stree[ind];
    if (qs > e || qe < s)
        return 0;

    int mid = (s + e) / 2;
    return getSum(stree, s, mid, qs, qe, 2 * ind + 1) +
           getSum(stree, mid + 1, e, qs, qe, 2 * ind + 2);
}

int constructST(vector<int> &arr, vector<int> &stree, int s, int e, int ind)
{
    if (s == e)
        return stree[ind] = arr[s];

    int mid = (s + e) / 2;

    int l_val = constructST(arr, stree, s, mid, 2 * ind + 1);
    int r_val = constructST(arr, stree, mid + 1, e, 2 * ind + 2);

    return stree[ind] = l_val + r_val;
}

int main( )
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    int st_height = ceil(log2(n));
    int st_size = pow(2, st_height + 1) - 1;

    vector<int> stree(st_size, -1);
    constructST(v, stree, 0, n - 1, 0);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << getSum(stree, 0, n - 1, l - 1, r - 1, 0) << endl;
    }
}