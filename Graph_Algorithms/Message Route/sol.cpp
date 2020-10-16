/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 16-10-2020,  5:53:22 pm IST   *
 *                                             *
\***********************************************/

#include <bits/stdc++.h>
using namespace std;

int main( )
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n, vector<int>( ));
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> parents(n, -2);

    queue<int> q;
    q.push(0);
    parents[0] = -1;

    while (q.size( ))
    {
        int f = q.front( );
        q.pop( );
        for (int i : adj[f])
        {
            if (parents[i] == -2)
            {
                parents[i] = f;
                q.push(i);
            }
        }
    }

    if (parents[n - 1] == -2)
        cout << "IMPOSSIBLE";
    else
    {
        vector<int> path;
        int p = n - 1;
        while (p)
        {
            path.push_back(p);
            p = parents[p];
        }
        path.push_back(0);
        
        reverse(path.begin( ), path.end( ));

        cout<<path.size()<<'\n';
        for (int i : path) cout << i + 1 << ' ';
    }

    return 0;
}