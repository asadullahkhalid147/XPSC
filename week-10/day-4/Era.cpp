#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i<a[i])
            {
                ans=max(ans,a[i]-i);
            }
        }
        cout<<ans<<endl;
    }
}
