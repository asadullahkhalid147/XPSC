#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            int q;cin>>q;
            st.insert(q);
        }
        int sz=st.size();
        int num=n-sz;
        if(num%2==0) cout<<sz<<endl;
        else cout<<sz-1<<endl;
    }
}
