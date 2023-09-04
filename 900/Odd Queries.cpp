#include<bits/stdc++.h>
using namespace std;
long long s[200005];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            s[i]=s[i-1]+x;
        }
        while(q--)
        {
        int l,r,k;cin>>l>>r>>k;

            if((s[n]-(s[r]-s[l-1]) +(r-l+1)*k)&1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
