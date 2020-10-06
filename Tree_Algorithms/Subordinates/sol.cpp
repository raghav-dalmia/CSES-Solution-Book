#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
vector<int>adj[N];
int subtree[N],n;

void dfs(int s,int p){
    ++subtree[s];
    for(auto u:adj[s]){
        if(u!=p){
            dfs(u,s);
            subtree[s]+=subtree[u];
        }
    }
}

signed main(){
    
    cin>>n;
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }
    dfs(1,-1);
    for(int i=1;i<=n;i++){
        cout<<subtree[i]-1<<" ";
    }
    cout<<endl;
    return 0;
}