#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int t;cin>>t;
        if(t%2==0) cout<<(t/2)-1<<endl;
        else cout<<(t/2)<<endl;
    }
}
