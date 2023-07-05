#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int>st;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }

    int ev=0,od=0;
    for(auto it:st)
    {
        if(it%2==0) ev++;
        else od++;
    }
    if(od==0 || ev==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        for(auto it:st)
        {
            if(it%2==0)
            {
                cout<<"NO"<<endl;
                break;
            }
            else if(it%2!=0)
            {
                cout<<"YES"<<endl;
                break;
            }
        }

    }
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
