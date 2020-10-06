#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    int dp[n+1];

    // Initialising dp array to infinity
    // dp[i] will store minimum number of steps to decrease i to 0 using the given operation
    for(int i=0;i<=n;i++)
        dp[i]=1e18;

    // 0 steps are needed for 0 to become 0
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int dig;
        int j=i;
        
        // Iterating over each digit to subtract from the number and then minimising the answer for 'i'
        while(j>0){
            dig=j%10;

            // if taking minimum of current value of steps for i and one plus value obtained by subtracting the current digit
            dp[i]=min(dp[i],1+dp[i-dig]);
            j/=10;
        }
    }
    cout<<dp[n];
    return 0;
}
