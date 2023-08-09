#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n,x,y;
   ll m=0;

   ll k;cin>>n>>k>>x;

   for(ll i=1;i<n;i++)
   {
       cin>>y;
       if(m==k) break;
       if(x>y)m++;
       else
       {
           x=y;
           m=1;
       }
   }
   cout<<x;

}
