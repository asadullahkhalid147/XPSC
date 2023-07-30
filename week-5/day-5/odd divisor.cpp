#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        if((n&(n-1))!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
