#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int>mp;
        int q=n;
        int a;
        while(q--)
        {
            cin>>a;
            mp[a]=n-q;
        }

        a=-1;
        for(auto [x,p]:mp)
        {
            for(auto [y,q]:mp)
            {
                if(__gcd(x,y)==1)
                {
                    a=max(a,p+q);
                }
            }
        }
        cout<<a<<endl;
    }
}
