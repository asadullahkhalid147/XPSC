#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,mn,mx,k;cin>>n>>mn>>mx>>k;
        vector<ll>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        ll cnt=0;
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            if(vec[i]>=mn && vec[i]<=mx && (k-vec[i])>=0)
            {
                k-=vec[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
