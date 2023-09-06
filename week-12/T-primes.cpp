#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        set<ll>st;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(n/i!=i)
                {
                    st.insert(i);
                    st.insert(n/i);
                }
                else st.insert(i);
            }
        }
        if(st.size()==3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
