#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int ans=0;
    string s;
    cin>>s;
    set<char>c;

    for(int i=0; i<s.size(); i++)
    {
        c.insert(s[i]);
//        for(auto ch:c)
//        {
//            cout<<ch<<" "<<i<<" ";
//        }
//        cout<<endl;
        if(c.size()>3)
        {
            c.clear();
            ans++;
            c.insert(s[i]);
        }
    }
    if(!c.empty()) ans++;
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
