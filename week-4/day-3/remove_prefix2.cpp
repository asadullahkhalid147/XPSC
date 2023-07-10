#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i;cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++) cin>>a[i];
    set<int>s;
   for(i=n-1;i>=0;i--)
        if(s.insert(a[i]).second) break;
   cout<<i+1<<endl;


}
int main()
{
    int t;cin>>t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
