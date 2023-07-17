#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long int a[200001];

        for(long long int  i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int ans1;
        long long int ans2;
        long long int ans;

        for(long long int i=0;i<n;i++)
        {
            ans1=abs(a[i]-a[i+1]);
            ans2=abs(a[i-1]-a[i]);
            ans=min(ans1,ans2);
        }
        cout<<ans<<endl;
    }

}
