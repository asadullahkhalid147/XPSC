#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>a(n+1,0);

        for(int i=1; i<=n; i++)cin>>a[i];
//        for(int i=1;i<=n;i++)cout<<a[i];

        long long ans=0;
        for(long long x=1; x<n; x++)
        {
            if(a[x]>a[x+1])
            {
                ans=max(ans,a[x]);

            }

        }


        cout<<ans<<endl;
    }
}
