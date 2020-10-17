
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int no_of_trailing_zeroes=0;
    while(n)
    {
        n/=5;
        no_of_trailing_zeroes += n;
    }
    cout<<no_of_trailing_zeroes<<endl;
}