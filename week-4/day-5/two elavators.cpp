#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,mn;cin>>a>>b>>c;
    int cn = a-1;
    if(b>c)
    {
        mn=(b-c)+(c-1);
    }
    else if(c>b)
    {
        mn= 2*(c-b)+(b-1);
    }
    if(cn==mn) cout<<3<<endl;
    else if (mn<cn) cout<<2<<endl;
    else if(cn<mn) cout<<1<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
