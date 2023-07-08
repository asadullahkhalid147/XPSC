#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n ;cin>>n;
    long long int sum=0;
    while(n>1)
    {
        sum+=n;
        n/=2;
    }
    cout<<sum+1<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
