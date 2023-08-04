#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        if(n*k>=10000 && n*k<=99999) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
