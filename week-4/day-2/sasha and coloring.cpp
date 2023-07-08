#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int arr[n];for(int i=0;i<n;i++) cin>>arr[i];

    int c=0;sort(arr,arr+n);
    for(int i=0;i<n/2;i++) c+=arr[n-i-1]-arr[i];
    cout<<c<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
