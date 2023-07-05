#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
   int n;cin>>n;
   vector<vector<int>>perm(n,vector<int>(n-1));
   vector<int>cnt(n+1,0);
   vector<int>arr(n,0);

   for(int i=0;i<n;i++)
   {

       for(int j=0;j<n-1;j++)
       {
           cin>>perm[i][j];
           if(j==0)cnt[perm[i][j]]++;/// this line is the difference of previous submission
       }

   }

   for(int i=0;i<=n;i++)
   {
       if(cnt[i]==(n-1))
       {
           arr[0]=i;break;
       }
   }

   for(int i=0;i<n;i++)
   {
       if(perm[i][0]!=arr[0])
       {
           for(int j=0;j<n-1;j++)
           {
               arr[j+1]=perm[i][j];
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
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
