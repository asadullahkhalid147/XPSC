#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        bool prv=true;
        long long ans=0,mx=0;
        for(int i=1;i<=n;i++)
        {
            long long x;cin>>x;

            if(x<0 && prv)
            {
                prv=false;
                ans++;
            }
            if(x>0)
            {
                prv=true;
            }
            mx+=abs(x);
        }
        cout<<mx<<" "<<ans<<endl;
    }
}
