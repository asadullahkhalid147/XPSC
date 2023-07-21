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
        long long int ans=INT_MAX;

        for(long long int i=0;i<n;i++)
        {
            ans=abs(a[i]-a[i+1]));
        }
        cout<<ans<<endl;
    }

}
