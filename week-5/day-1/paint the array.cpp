#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll x, ll y)
{
    if(y==0) return x;
    return gcd(y,x%y);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ll x=0,y=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0) x=gcd(x,a[i]);
            else y=gcd(y,a[i]);
        }

        int ok1=1,ok2=1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && a[i]%y==0) ok2=0;
            if(i%2==1 && a[i]%x==0) ok1=0;
        }

        if(ok1!=0) cout<<x<<endl;
        else if(ok2!=0) cout<<y<<endl;
        else cout<<0<<endl;
    }
}
