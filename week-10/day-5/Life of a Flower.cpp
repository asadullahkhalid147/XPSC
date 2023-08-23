#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)cin>>a[i];

        int ans=1;

        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                ans+=1;
                if(a[i+1]==1 && i+1<n) ans+=4;
            }
            else if(a[i]==0)
            {
                if(a[i+1]==0 && i+1<n)
                {
                    ans=-1;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
