#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int ans=0;
        int n;cin>>n;
        vector<int>a(n);
        for(auto &it:a)cin>>it;
        int right_min = INT_MAX;

        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>right_min) ans++;
            right_min=min(a[i],right_min);
        }
        cout<<ans<<endl;


    }
}
