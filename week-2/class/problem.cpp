#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;

        if((n+3*k)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
