#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int arr[n];
    long long int  sum=0,cn=0,mn=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=abs(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(mn==0)
            {
                mn=1;
                cn++;
            }
        }
        else if(arr[i]>0)  mn=0;
    }
    cout<<sum<<" "<<cn<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
