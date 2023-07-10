#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
         int n;cin>>n;
         int k=pow(10,int(log10(n)));
        cout<<n-k<<endl;
    }
}
