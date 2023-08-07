#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   while(t--)
   {
       string s;cin>>s;

       int n=(s.size())/2;

       int i=0;
       string y,z;

       while(n--)
       {
           y+=s[i];
           i++;
       }
       z+=y+y;
       if(z==s) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }

}
