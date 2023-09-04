#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n+1,0);

        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        int ans=0,res=INT_MAX,cnt=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i+1])cnt++;

            res=min(res,a[i+1]-a[i]);
//            cout<<res<<" ";
        }


        if(cnt==n-1)
        {
            cout<<res/2+1<<endl;
        }
        else cout<<0<<endl;
    }
}
