#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int t;cin>>t;
        if(t==2 || t==3 || t==4)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
}
