#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;cin>>a>>b>>c;
    if(a>b)cout<<"First"<<endl;
    else if(a<b)cout<<"Second"<<endl;
    else if(a==b)
    {
        if(c&1)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
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
