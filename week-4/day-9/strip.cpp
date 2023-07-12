#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;cin>>n;
   while(n--)
   {
       int box,clr;cin>>box>>clr;
       int sum=0;
       for(int i=0;i<clr;i++)
       {
           int x;cin>>x;
           if(x<box)
           {
               sum+=x;
               soto++;
           }
           else if(x>box)
           {
               sum+=x;
               boro++;
           }
           else if(x==box)
           {
               maje++;
           }
       }
       if(soto>=1&&boro==0)
       {
            dell=sum%box;
       }
       else if(maje==box)
       {
            ans=sum/box;
       }
       else if()


       int dell=sum%box;
       cout<<dell<<endl;
   }
}
