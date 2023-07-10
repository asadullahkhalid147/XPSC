#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    map<string,int>mp;
    string s;cin>>s;
    if(s.size()<2)
    {
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        mp[s.substr(i,2)]++;
    }

    string v;
    int ans=-1;
    for(auto it:mp)
    {
        if(it.second>ans)
        {
            ans=it.second;
            v=it.first;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
