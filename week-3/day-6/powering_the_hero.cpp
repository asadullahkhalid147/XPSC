#include<bits/stdc++.h>
using namespace std;
typedef long long int rjk;
void solve()
{
    int n;cin>>n; rjk sum=0;
    priority_queue<int>p;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        p.push(x);
        if(x==0) sum+=p.top(),p.pop();
    }
    cout<<sum<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
