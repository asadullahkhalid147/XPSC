#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vector<ll>a(n);
        ll one=0,zero=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)one++;
            else if(a[i]==0)zero++;
        }

        ll ans = (ll)one * (1ll<<zero);
        cout<<ans<<endl;
    }
}
