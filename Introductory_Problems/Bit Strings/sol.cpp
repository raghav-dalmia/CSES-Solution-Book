#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int n;
    cin>>n;
    int ans = 1,count=1;;
    while(count<=n)
    {
        ans *= 2;
        ans = ans % (1000000000+7);
        count++;
    }
    
    cout<<ans<<endl;
    return 0;
}