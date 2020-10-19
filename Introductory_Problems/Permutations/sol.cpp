#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int n;
    cin>>n;

    if (n == 2 || n==3)
    cout<<"NO SOLUTION"<<endl;
    else if (n ==  4)
    cout<<"2 4 1 3"<<endl;
    else
    {
        for (int i=1;i<=n;i=i+2)
        cout<<i<<" ";

        for (int i=2;i<=n;i=i+2)
        cout<<i<<" ";

        cout<<endl; 
    }
    

    return 0;
}