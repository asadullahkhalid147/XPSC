#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,m,h,k;
   int pan=0,mar=0,rem=0,ans=0,res=0;
   int l=0,rob=1;
   cin>>n>>m>>h;
   for(int i=0;i<n*m;i++)
   {
       if(i%m==0)
       {
           pan=0;
           mar=0;
       }
       cin>>k;
       rem =h-k-l;
       if(rem>=k)
       {
           pan+=k+l;
           mar+=1;
           l=k;

       }


       if(i<m)
       {
           ans =mar;
           res=pan;

       }
       cout<<mar<<" "<<pan<<endl;
        cout<<ans<<" "<<res<<endl;
       if(ans<mar) rob++;
       else if( ans==mar)
       {
           if(res>pan) rob++;

       }

   }
   cout<<"---"<<rob<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
