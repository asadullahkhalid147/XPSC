#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool is_prime(ll n)
{
    if(n==1)return false;
    if(n==2)return true;
    if(n%2==0)return false;

    for(int i=3; i*i<=n; i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    ll n;
    cin>>n;
    if(is_prime(n))cout<<1<<endl;
    else  if(n&1)
    {
        if(is_prime(n-2))cout<<2<<endl;
        else cout<<3<<endl;
    }
    else cout<<2<<endl;

}
