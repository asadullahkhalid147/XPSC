#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        priority_queue<int>q[n+1];

        for(int i=0;i<n;i++)
        {
            int x,y;cin>>x>>y;
            q[x].push(y);
        }

        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            int j=0;
            while(q[i].size() && j<i)
            {
                ans+=q[i].top();
                q[i].pop();
                j++;
            }
        }
        cout<<ans<<endl;
    }
}
