#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int y,x; cin>>y>>x;
        if(y==x){
            cout<<((x*x)-(x-1))<<endl;
        }else if(y>x){
            if(y%2==0){
                int var=y*y;
                cout<<var-(x-1)<<endl;
            }else{
                int var=(y-1)*(y-1);
                cout<<(var+1)+(x-1)<<endl;
            }
        }else if(x>y){
            if(x%2!=0){
                int var=x*x;
                cout<<var-(y-1)<<endl;
            }else{
                int var=(x-1)*(x-1);
                cout<<(var+1)+(y-1)<<endl;
            }
        }
    }
 
    return 0;
}
