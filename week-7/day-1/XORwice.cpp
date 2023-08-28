#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        int ans=(a^max(a,b))+(b^max(a,b));
        cout<<ans<<endl;
    }
}
