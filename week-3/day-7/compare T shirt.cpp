#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s1;string s2;cin>>s1>>s2;

    int n=s1.size();int m=s2.size();
    char c1 = s1[n-1];
    char c2 = s2[m-1];

    if(c1!=c2)
    {
        if(c1<c2) cout<<">"<<endl;
        else if(c1>c2) cout<<"<"<<endl;
    }
    else if(c1==c2)
    {
       if(c1=='S')
       {
           if(n>m) cout<<"<"<<endl;
           else if(n<m) cout<<">"<<endl;
           else if(n==m) cout<<"="<<endl;
       }
       else if(c1=='L')
       {
           if(n>m) cout<<">"<<endl;
           else if(n<m) cout<<"<"<<endl;
           else if(n==m) cout<<"="<<endl;
       }
       else if(c1=='M') cout<<"="<<endl;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
