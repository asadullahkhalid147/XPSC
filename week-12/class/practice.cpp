#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,c;cin>>a>>b>>c;
       float d=(a+b)/2.00;
       float e=max(a,b)-d;
       int cnt=0;
       while(e>0)
       {
           e-=float(c);
           cnt++;
       }
       cout<<cnt<<endl;
    }
}
