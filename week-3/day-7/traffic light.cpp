#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;char c;cin>>n>>c;
    string s;cin>>s;
    s=s+s;
    int k=-1,ans=INT_MIN;
    for(int i=s.size();i>0;i--)
    {
        if(s[i]=='g') k=i;
        if(s[i]==c) ans=max(ans,k-i);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
