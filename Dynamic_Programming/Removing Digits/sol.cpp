#include<bits./stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    int dp[n+1];
    memset(dp,63,sizeof(dp));
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int dig;
        int j=i;
        while(j>0){
            dig=j%10;
            dp[i]=min(dp[i],1+dp[i-dig]);
            j/=10;
        }
    }
    cout<<dp[n];
    return 0;
}
