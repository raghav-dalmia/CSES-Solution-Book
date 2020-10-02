/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 03-10-2020,  1:26:13 am IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

const int nx = (1e3) + 1;
int n, m;

bool vis[nx][nx];
vector<vector<int>> mov = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int r, int c) { return (r >= 0 && r < n && c >= 0 && c < m); }

void dfs(vector<string> &v, int r, int c)
{
    vis[r][c] = 1;
    for (auto it : mov)
    {
        int nr = r + it[0];
        int nc = c + it[1];
        if (valid(nr, nc) && !vis[nr][nc] && v[nr][nc] == '.')
            dfs(v, nr, nc);
    }
}

int main( )
{
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.emplace_back(s);
        for (int j = 0; j < m; j++) vis[i][j] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (!vis[i][j] && v[i][j] == '.')
            {
                ans++;
                dfs(v, i, j);
            }
    cout << ans;
    return 0;
}
