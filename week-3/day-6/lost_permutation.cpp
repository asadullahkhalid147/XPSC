#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,s;cin>>x>>s;
    int a[10000];
    int n,m=0;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
        s+=a[i];
        m=max(m,a[i]);
    }
    s=s*2;
    n=sqrt(s);


    while((n>=1) && (n*(n+1))>s)
    {
        n--;
    }
    if(n*(n+1)==s && m<=n)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
