#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);

    ll j=0;
    vector<map<ll,ll>>b;
    for(ll i=0;i<n;i++)
    {
        b.push_back(b[a[i]]++);
    }
//    vector<pair<ll,ll>>b;
//    for(ll i=0;i<n;i++)
//    {
//        j=i;
//        while(i<n && a[i] == a[j])
//        {
//            i++;
//        }
//        b.push_back({a[j],i-j});
//    }
    for(auto it:b)
    {
        cout<<it.first<< " "<<it.second<<"   ";
    }
//    ll ans = b[0].second;
//    ll m = b.size();
//    for(ll i=1;i<m;i++)
//    {
//        if(b[i].first +1 == b[i-1].first)
//        {
//            ans = ans+ max(b[i].second - b[i-1].second,0LL);
//        }
//        else
//        {
//            ans = ans+b[i].second;
//        }
//    }
//    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
