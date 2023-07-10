#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;
    for(int d=9;d>=1;d--)
    {
        if(n>=d)
        {
            s=char('0'+d)+s;
            n=n-d;
        }
    }
    cout<<s<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
