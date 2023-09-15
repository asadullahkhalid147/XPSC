#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
        int c,d,e;
        c=a1-a2;
        d=b1-b2;
        e=c+d;

        if(c>=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

