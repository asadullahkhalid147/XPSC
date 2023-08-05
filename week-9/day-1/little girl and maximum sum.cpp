#include<bits/stdc++.h>
using namespace std;
long long a[200001],b[200001];
typedef long long ll;
int main()
{
    ll n,q;cin>>n>>q;
    ll ans;

    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=q;i++)
    {
        ll l,r;cin>>l>>r;
        b[l]++;
        b[r+1]--;
    }

    for(ll i=1;i<=n;i++)
    {
        b[i]+=b[i-1];
    }

    sort(a+1,a+n+1);
    sort(b+1,b+n+1);

    for(ll i=1;i<=n;i++)
    {
        ans+=a[i]*b[i];
    }
    cout<<ans<<endl;
}
