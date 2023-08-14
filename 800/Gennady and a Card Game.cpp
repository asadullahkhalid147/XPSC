#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    char c1=s[0];
    char c2=s[1];
    int n=5;
    int flag=0;
    while(n--)
    {
        string m;cin>>m;
        char m1=m[0];
        char m2=m[1];

        if(c1==m1 || c1==m2 || c2==m1 || c2==m2)
        {
            flag=1;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
