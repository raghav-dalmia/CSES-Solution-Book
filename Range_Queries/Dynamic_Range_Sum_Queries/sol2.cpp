/********************************************
 *                                          *
 *   author: Raghav Dalmia                  *
 *   updated on: 11-01-2021, 21:20:44 IST   *
 *                                          *
\*******************************************/
 
#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
 
class segTree
{
    // verified: cses 1646, 1647, 1649
    int *tree;
    vector<int> arr;
    int n, def;
    function<int(int, int)> func;
 
   public:
    segTree(int n, function<int(int, int)> func, int def = 0)
    {
        this->n = n;
        this->func = func;
        this->def = def;
        this->tree = new int[4 * n];
    }
 
   private:
    int buildTreeUtil(int s, int e, int ind)
    {
        if (s == e)
            return this->tree[ind] = this->arr[s];
        int mid = (s + e) / 2;
        return this->tree[ind] = this->func(this->buildTreeUtil(s, mid, 2 * ind),
                                            this->buildTreeUtil(mid + 1, e, 2 * ind + 1));
    }
     
   public:
    void build(vector<int> &arr)
    {
        this->arr = arr;
        this->buildTreeUtil(0, this->n - 1, 1);
    }
 
   private:
    int queryUtil(int l, int r, int s, int e, int ind)
    {
        if (l <= s && e <= r)
            return this->tree[ind];
        if (r < s || l > e)
            return def;
        int mid = (s + e) / 2;
        return this->func(queryUtil(l, r, s, mid, 2 * ind),
                          queryUtil(l, r, mid + 1, e, 2 * ind + 1));
    }
 
   public:
    int query(int l, int r) { return this->queryUtil(l, r, 0, this->n - 1, 1); }
 
   private:
    void updateUtil(int s, int e, int ind, int pos, int diff)
    {
        if (s == e)
            this->tree[ind] = this->tree[ind] + diff;
        else
        {
            int mid = (s + e) / 2;
            if (pos <= mid)
                updateUtil(s, mid, 2 * ind, pos, diff);
            else
                updateUtil(mid + 1, e, 2 * ind + 1, pos, diff);
            this->tree[ind] = this->func(this->tree[2 * ind], this->tree[2 * ind + 1]);
        }
    }
 
   public:
    void update(int pos, int val)
    {
        this->updateUtil(0, this->n - 1, 1, pos, val - this->arr[pos]);
        this->arr[pos] = val;
    }
    int exe_func(int a, int b) { return this->func(a, b); }
};
 
signed main( )
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int &i : v) cin >> i;
    segTree tree(n, [](int a, int b) { return a + b; }, 0);
    tree.build(v);
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
            tree.update(l - 1, r);
        else
            cout << tree.query(l - 1, r - 1) << endl;
    }
 
    return 0;
}