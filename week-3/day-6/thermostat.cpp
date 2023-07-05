#include<bits/stdc++.h>
using namespace std;
typedef long long int jkl;
void solve()
{
    jkl l,r,x,a,b;cin>>l>>r>>x>>a>>b;
    jkl ans = -1;
    if(a>b) swap(a,b);

    if(a==b) ans = 0;
    else if(abs(a-b)>=x) ans =1;
    else if(((b+x)<=r) ||(a-x>=l)) ans = 2;
    else
    {
        if(((b-x)>=l) && (a+x)<=r) ans =3;
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
