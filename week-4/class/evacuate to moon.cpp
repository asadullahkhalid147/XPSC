#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        ll m[a],n[b];
        ll ans=0;

        for(ll i=0;i<a;i++)
        {
            cin>>m[i];
        }
        for(ll i=0;i<b;i++)
        {
            cin>>n[i];
        }
        sort(m,m+a,greater<ll>());
        sort(n,n+b,greater<ll>());

        for(ll i=0,j=0;i<a && j<b; i++,j++)
        {
            if(n[j]*c>m[i]) ans+=m[i];
            else
            {
                ans+=n[j]*c;
            }
        }
        cout<<ans<<endl;
    }
}
