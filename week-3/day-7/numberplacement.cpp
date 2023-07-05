#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;int a[n];string s;int k=1;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>s;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && s[i]!=s[j]) k=0;
        }
    }
    if(k==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
