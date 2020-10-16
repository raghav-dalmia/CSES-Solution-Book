#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int n;
    cin>>n;

    int total_sum = (n*(n+1))/2;
    
    if (total_sum%2 != 0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;

        int s1 = total_sum/2;
        vector<int>v(n+1,0);
        int counter = n;
        int size1=0;
        int size2=0;
        while(s1!=0)
        {
            if (s1-counter < 0)
            break;
            s1 = s1-counter;
            v[counter]=1;
            size1++;
            counter--;
        }
        if (s1 != 0)
        {
            v[s1]=1;
            size1++;
        }
        size2 = n-size1;
        cout<<size1<<endl;
        for (int i=1;i<=n;i++)
        {
            if (v[i] == 1)
            cout<<i<<" ";
        }
        cout<<endl<<size2<<endl;
        for (int i=1;i<=n;i++)
        {
            if (v[i] == 0)
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
    
}