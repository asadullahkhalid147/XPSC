#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);

        int val=a[n-1]+a[n-2];
        int ans=k/val;
        ans=ans*2;

        if(k%val>a[n-1]) ans+=2;
        else if(k%val==0) ans=ans;

        else ans+=1;

        cout<<ans<<endl;
    }
}
