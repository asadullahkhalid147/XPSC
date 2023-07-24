#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ans=INT_MAX;
        for(int i=1;i*i<=n;i++)
        {
            ans=min(ans,i-1+((n-i)+i-1)/i);
        }
        cout<<ans<<endl;
    }
}
