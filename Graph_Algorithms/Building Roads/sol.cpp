/***********************************************
 *                                             *
 *   author: raghav_0901 (Raghav Dalmia)       *
 *   updated on: 16-10-2020,  5:30:45 pm IST   *
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

    vector<bool> vis(n, 0);
    vector<int> unconnectedNodes;

    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            continue;

        queue<int> q;
        q.push(i);
        unconnectedNodes.push_back(i);
        vis[i] = 1;

        // bfs - mark all the nodes connected with i, visisted
        while (q.size( ))
        {
            int f = q.front( );
            q.pop( );
            for (int j : adj[f])
            {
                if (!vis[j])
                {
                    q.push(j);
                    vis[j] = 1;
                }
            }
        }
    }

    cout << unconnectedNodes.size( ) - 1 << '\n';
    for (int i = 1; i < unconnectedNodes.size( ); i++)
        cout << unconnectedNodes[i - 1] + 1 << ' ' << unconnectedNodes[i] + 1 << '\n';

    return 0;
}