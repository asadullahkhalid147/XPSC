#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;cin>>s;int n=s.size();map<char,vector<int>>ind;
    for(int i=0;i<n;i++) ind[s[i]].push_back(i);
    int cost=0;int dir=(s[0]<s[n-1])?1:-1;
    vector<int>ans;
    for(char c=s[0];c!=s[n-1]+dir;c+=dir)
    {
        for(auto it:ind[c])
        {
            ans.push_back(it);
        }
    }

    for(int i=1;i<ans.size();i++)
    {
        cost+=abs(s[ans[i]]-s[ans[i-1]]);
    }
    cout<<cost<<" "<<ans.size()<<endl;

    for(int it:ans) cout<<it+1<<" ";
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
