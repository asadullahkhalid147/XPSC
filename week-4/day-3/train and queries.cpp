#include<bits/stdc++.h>
using namespace std;

void solve()
{
    cout<<endl;
    long long int n,k;cin>>n>>k;
    map<int,int>first,last;

    for(int i=1;i<=n;i++)
    {
        long long int x;cin>>x;
        if(first[x]==0) first[x]=i;
        last[x]=i;
    }
    for(int i=0;i<k;i++)
    {
        long long int t,u;cin>>t>>u;
        if(first[t]!=0 && first[u]!=0 && last[u]>=first[t]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
    long long int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
