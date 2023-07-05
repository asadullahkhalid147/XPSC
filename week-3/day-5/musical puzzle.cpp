#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    set<int>v;
    for(int i=1;i<n;i++)
    {
        v.insert(s[i-1]*1000+s[i]);
    }
    cout<<v.size()<<endl;


}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
