#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    int flag=0;
    set<int>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s.count(vec[i]))
        {
            cout<<i+1<<endl;
            flag=1;
            break;
        }
        s.insert(vec[i]);
    }
    if(flag==0) cout<<0<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
