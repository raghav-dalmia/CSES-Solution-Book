/********************************************
 *                                          *
 *   author: Raghav Dalmia                  *
 *   updated on: 22-02-2021, 15:19:33 IST   *
 *                                          *
\*******************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long int

void updateTree(int n, vector<int> &tree, int pos, int val)
{
    while (pos <= n)
    {
        tree[pos] += val;
        pos += pos & (-pos);
    }
}

void buildTree(int n, vector<int> &tree, vector<int> &v)
{
    for (int i = 0; i < n; i++)
    {
        updateTree(n, tree, i + 1, v[i]);
        updateTree(n, tree, i + 2, -v[i]);
    }
}

int query(int n, vector<int> &tree, int pos)
{
    int ans = 0;
    while (pos > 0)
    {
        ans += tree[pos];
        pos = pos & (pos - 1);
    }
    return ans;
}

signed main( )
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int &i : v) cin >> i;

    vector<int> tree(n + 1, 0);
    buildTree(n, tree, v);

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int a, b, u;
            cin >> a >> b >> u;
            updateTree(n, tree, a, u);
            updateTree(n, tree, b + 1, -u);
        }
        else
        {
            int k;
            cin >> k;
            cout << query(n, tree, k) << endl;
        }
    }
    return 0;
}
