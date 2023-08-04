#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int  n,k;cin>>n>>k;
        int m=min(k,30);

        int ans = min(1<<m,n+1);/// pow(2,k);
        cout<<ans<<endl;
    }

}
