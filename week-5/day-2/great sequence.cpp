#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=500005;
ll a[N];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;

        map<ll,int>mp;

        mp.clear();
        for(int i=1;i<=n;i++)cin>>a[i];
        sort(a+1,a+n+1);
        int flag=n;

        for(int i=n;i>=1;i--)
        {
            if(mp[a[i]*k]!=0)
            {
                mp[a[i]*k]--;
                flag-=2;
            }
            else
            {
                mp[a[i]]++;
            }
        }
        cout<<flag<<endl;
    }
}
