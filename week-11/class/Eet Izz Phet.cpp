#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int hashing(string s,int base)
{

    int val=1;
    int ans=0;
    for(char c:s)
    {
        int ascii=c-'a'+1;
        ans+=((ascii%mod)*(val%mod))%mod;///(ascii*val)%mod
        ans=ans%mod;
        /// mod formula => (a*b)%mod = ((a%mod)*(b%mod))%mod;
        val=((val%mod)*(base%mod))%mod;
    }
    return ans;
}

int main()
{
    int n;cin>>n;
    set<pair<int,int>>st;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        st.insert({hashing(s,2),hashing(s,3)});
    }

    int q;cin>>q;
    while(q--)
    {
        string s;cin>>s;
        if(st.count({hashing(s,2),hashing(s,3)})>0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
