#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        string ch="";
        for(int i=0;i<20;i++)
        {
            ch=ch+"Yes";
        }
        if(ch.find(s)!=-1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}

