#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[200001];


int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>n>>k;
        cin>>s;
        int ans=n;
        for(int i=1; i<=n; i++)
        {
            a[i]=a[i-1]+(s[i-1]=='W');
        }
        for(int i=1; i<=n-k+1; i++)
        {
            ans=min(ans,a[i+k-1]-a[i-1]);
        }
        cout<<ans<<endl;
    }
}
