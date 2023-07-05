#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll xorr(ll a)
{
    ll rem = a%4;
    if(rem==0) return a;
    else if(rem==1) return 1;
    else if(rem==2) return a+1;
    else if(rem==3) return 0;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll ans = xorr(a-1)^xorr(b);
    cout<<ans<<endl;
}
