#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[200005];
        for(int i=0;i<n;i++)cin>>a[i];
        set<int>st;
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1]) st.insert(a[i-1]);

            else if(a[i]<a[i-1])
            {
                st.insert(a[i-1]);
                ans=st.size();
            }

            if(st.count(a[i]))
            {
                ans=st.size();
            }

        }
        cout<<ans<<endl;
    }
}
