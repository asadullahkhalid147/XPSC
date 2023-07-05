#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    int a[58]={0};
    for(int i=0;i<n;i++) a[s[i]-'A']++;
    int ans=0,q=0;

    for(int i=0;i<26;i++)
    {
        q+=abs((a[i]-a[i+32])/2);
        ans+=min(a[i],a[i+32]);
    }
    ans+=min(q,k);
    cout<<ans<<endl;
}

signed main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
