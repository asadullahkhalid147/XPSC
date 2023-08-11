#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());

        ll tot = n-2,sum=0,idx=0;
        map<ll,ll>mp;


        while(tot>=1)
        {
            sum+=(tot*(tot+1))/2;
            mp[sum]=idx;
            idx++;
            tot--;
        }
        while(q--)
        {
            ll x;cin>>x;
            auto lb=mp.lower_bound(x);
            cout<<a[lb->second]<<endl;
        }
    }
}
