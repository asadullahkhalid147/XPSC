#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0,j=0;
        int fst=0,snd=0,thd=0;
        int n=s.size();
        while(j<3)
        {
            if((s[j]=='y'||s[j]=='Y' )&&(s[j+1]=='E'||s[j+1]=='e') &&(s[j+2]=='s'||s[j+2]=='S'))fst++;break;
        }
        if(fst==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
