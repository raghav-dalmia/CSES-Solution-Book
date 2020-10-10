/***********************************************
 *                                             *
 *   author: keshav2508 (Keshav Dalmia)       *
 *   updated on: 010-10-2020, 5:10:53 pm IST   *
 *                                             *
\***********************************************/

#include<bits/stdc++.h>
using namespace std;
#define int               long long int
#define ff                first
#define ss                second
#define pb                push_back
#define mp                make_pair
#define pii               pair<int,int>
#define vi                vector<int>
#define vvi               vector<vector<int>>
#define mii               map<int,int>
#define pqb               priority_queue<int>
#define pqs               priority_queue<int,vi,greater<int> >
#define mod               1000000007
#define inf               1e18
#define ps(x,y)           fixed<<setprecision(y)<<x
#define heap(arr,n,type)  type *arr=new type[n];
#define w(x)              int x; cin>>x; while(x--)
#define endl              '\n'
#define fio               ios_base::sync_with_stdio(false); cin.tie(NULL);


signed main()
{
	
	fio
	string s; cin>>s;
	int final_ans=1,temp_ans=1;
        for(int i=1;i<s.size();i++){
	    if(s[i]==s[i-1]){
		temp_ans++;
	    }else{
		final_ans=max(final_ans,temp_ans);
		temp_ans=1;
     	    }
    	}
    	final_ans=max(final_ans,temp_ans);
	cout<<final_ans;
	return 0;
	
	
	
}
