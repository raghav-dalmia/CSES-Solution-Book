#include <bits/stdc++.h>
using namespace std;
#define int long long int
void permute(string str,vector<string> &ans)
{
    sort(str.begin(), str.end());
 
    do {
       ans.push_back(str);
    } while (next_permutation(str.begin(), str.end()));
}
signed main()
{
    string s; cin>>s;
    vector<string> ans;
    permute(s,ans);
    cout<<ans.size()<<endl;
    for(auto it: ans)
        cout<<it<<endl;
}
