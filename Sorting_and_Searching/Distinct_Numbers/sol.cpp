#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        s.insert(ele);
    }
    cout<<s.size()<<endl;
    return 0;
}