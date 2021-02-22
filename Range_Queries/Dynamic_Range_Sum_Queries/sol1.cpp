/********************************************
 *                                          *
 *   author: Raghav Dalmia                  *
 *   updated on: 21-02-2021, 21:28:41 IST   *
 *                                          *
\*******************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long int

class fenwickTree
{
    vector<int> tree;
    int n;

   public:
    fenwickTree(vector<int> &arr)
    {
        this->n = arr.size( );
        this->tree = vector<int>(n + 1, 0);
        for (int i = 0; i < this->n; i++) { this->update(arr[i], i + 1); }
    }

    void update(int val, int pos)
    {
        while (pos <= this->n)
        {
            this->tree[pos] += val;
            pos += pos & (-pos);
        }
    }

    int prefixSum(int pos)
    {
        int ans = 0;
        while (pos > 0)
        {
            ans += this->tree[pos];
            pos = (pos & (pos - 1));
        }
        return ans;
    }

    int query(int l, int r) { return this->prefixSum(r) - this->prefixSum(l - 1); }
};

signed main( )
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    fenwickTree *tree = new fenwickTree(v);
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1){
            tree->update(r - v[l - 1], l);
            v[l-1] = r;
        }
        else
            cout << tree->query(l, r) << endl;
    }
    return 0;
}
