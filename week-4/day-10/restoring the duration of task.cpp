#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;long long int a[200005];long long int b[200005];
        for(long long int i=0;i<n;i++) cin>>a[i];
        for(long long int i=0;i<n;i++) cin>>b[i];

        for(long long int i=0;i<n;i++)
        {
            cout<<b[i]-max(b[i-1],a[i])<<" ";
        }
        cout<<endl;
    }
}
