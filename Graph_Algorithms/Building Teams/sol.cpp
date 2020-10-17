/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 13-10-2020,  9:23:08 pm IST   *
 *                                             *
\***********************************************/
 
#include <bits/stdc++.h>
using namespace std;
 
int main( )
{
    int n, m;
    cin >> n >> m;
 
    // adjacency list
    vector<vector<int>> graph(n, vector<int>( ));
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
 
    vector<int> ans(n, -1);
 
    // bfs
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != -1)
            continue;
        q.push(i);
        ans[i] = 0;
 
        while (q.size( ))
        {
            int f = q.front( );
            q.pop( );
            for (int i : graph[f])
            {
                if (ans[i] != -1)
                {
                    if (ans[i] == ans[f])
                    {
                        cout << "IMPOSSIBLE";
                        return 0;
                    }
                }
                else
                {
                    ans[i] = ans[f] ^ 1;
                    q.push(i);
                }
            }
        }
    }
 
    for (int i : ans) cout << (i + 1) << " ";
    return 0;
}