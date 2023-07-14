#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int a,b,c,x,y;cin>>a>>b>>c>>x>>y;

      int cat = max(0LL,x-a);
      int dog=max(0LL,y-b);

      if(cat+dog<=c) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
