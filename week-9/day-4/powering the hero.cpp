#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;
        priority_queue<long long>q;
        long long sum=0;
        while(n--)
        {
            long long x;cin>>x;
            q.push(x);
            if(x==0)
            {
                sum+=q.top();
                q.pop();
            }
        }
        cout<<sum<<endl;
    }
}
