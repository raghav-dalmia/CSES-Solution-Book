#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){

    int n;
    cin>>n;
    int q;
    cin>>q;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int prefix_xor[n+1];
    memset(prefix_xor,0,sizeof(prefix_xor));
    for(int i=1;i<=n;i++)
        prefix_xor[i]=prefix_xor[i-1]^a[i];

    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<(prefix_xor[y]^prefix_xor[x-1])<<endl;
    }
    return 0;
}