#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s,r;cin>>n>>s>>r;
    int val = s-r;
    cout<<val<<" ";

    for(int j=2;j<=n;j++)
    {
        while(r-val<n-j)
        {
            val--;
        }
        cout<<val<<" ";
        r=r-val;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
