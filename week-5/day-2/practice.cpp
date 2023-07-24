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
    int n;cin>>n;
    int x=0;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++)
    {
        x=gcd(x,a[i]);
    }

    cout<<x<<endl;

}
