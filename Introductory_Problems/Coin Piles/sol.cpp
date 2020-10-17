#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if (abs(a-b) > min(a,b))
        {
            cout<<"NO"<<endl;
            continue;
        }
        if ((a+b) % 3 != 0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
        }        
    }
}