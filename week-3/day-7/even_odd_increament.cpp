#include<bits/stdc++.h>
using namespace std;
typedef long long int jkl;
void solve()
{
    jkl k;cin>>k;jkl q;cin>>q; jkl ev=0,od=0,sum=0;
    jkl arr[k];jkl n,m;
    for(int i=0;i<k;i++) cin>>arr[i];

    for(jkl i=0;i<k;i++)
    {
        if(arr[i]%2==0) ev++;
        else if(arr[i]%2!=0) od++;
        sum+=arr[i];
    }
    while(q--)
    {
        cin>>n>>m;
        if(n==0)
        {
            if(m%2==0)
            {
                sum+=ev*m;
                cout<<sum<<endl;
            }
            else if(m%2!=0)
            {
                sum+=ev*m;
                cout<<sum<<endl;
                ev=0;
                od=k;
            }
        }
        else if(n==1)
        {
            if(m%2==0)
            {
                sum+=od*m;
                cout<<sum<<endl;
            }
            else if(m%2!=0)
            {
                sum+=od*m;
                cout<<sum<<endl;
                ev=k;
                od=0;
            }
        }
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
