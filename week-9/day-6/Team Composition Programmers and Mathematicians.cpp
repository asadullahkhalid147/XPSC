#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        if(n/4==0 && k/4==0)
        {
            if(n+k>=4) cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
}
