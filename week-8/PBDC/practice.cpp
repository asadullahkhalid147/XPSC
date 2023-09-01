#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int m=0,p=0,b=0;
        int n,a,q;cin>>n>>a>>q;
        string s;cin>>s;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+') p++;

            if(s[i]=='-' && s[i+1]=='+' &&(i+1)<n)
            {
                b++;
            }
        }

       if(a+(p-b)>=n)cout<<"YES"<<endl;
       else if(a+(p-b)<n)
       {
           if(n-a>p)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               cout<<"MAYBE"<<endl;
           }
       }


    }
}
