#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,h,m;cin>>n>>h>>m;
    int ans=INT_MAX;
    while(n--)
    {
        int x,y;cin>>x>>y;
        ans=min(ans,(((x*60+y)-(h*60+m)+(60*24))%(60*24)));

    }
    cout<<ans/60<<" "<<ans%60<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
