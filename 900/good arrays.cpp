#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long ans=0,one=0;
        int n;cin>>n;
        int k=n;
        while(n--)
        {
            long long a;cin>>a;
            if(a==1)one++;

            ans+=a;
        }
        if(ans>=one+k && k>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
