#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>vec(n);
        vector<ll>cop(n);

        for(int i=0;i<n;i++)cin>>vec[i];

        for(int i=0;i<n;i++)cop[i]=i+1;

        ll r=0,l=0;
        bool ans=true;
        while(r<n)
        {
            while(r<n-1 && vec[r]==vec[r+1])r++;

            if(l==r)
            {
                ans=false;
                break;
            }
            else
                rotate(cop.begin()+l,cop.begin()+r,cop.begin()+r+1);
            l=r+1;
            r++;
        }
        if(ans)
        {
            for(auto &x:cop)cout<<x<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}
