#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main()
{
    string s; cin>>s;
    int n=s.size();
    map<char,int> m;
    for(int i=0;i<n;i++){
        m[s[i]]++;
    }
    int x=0;
    char c;
    for(auto it:m){
        if(it.second%2!=0){
            c=it.first;
            x++;
        }
    }
    if(x>1){
        cout<<"NO SOLUTION";
    }else{
        string ans;
        if(x==0){
            for(auto it:m){
                for(int i=0;i<it.second/2;i++){
                    ans.push_back(it.first);
                }
            }
            string help = ans;
            reverse(begin(help),end(help));
            ans+=help;
        }else if(x==1){
            for(auto it:m){
                for(int i=0;i<it.second/2;i++){
                    ans.push_back(it.first);
                }
            }
            string help = ans;
            reverse(begin(help),end(help));
            ans+=c;
            ans+=help;
        }
        cout<<ans;
    }
}
