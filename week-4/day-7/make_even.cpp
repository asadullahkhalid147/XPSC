#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int t;cin>>t;
        int a=-1;
        if(t%2==0) cout<<0<<endl;
        else
        {
            t/=10;
            while(t>0)
            {
                if(t%2==0)
                {
                    if(t<10) a=1;
                    else a=2;
                }
                t/=10;
            }
        }
        cout<<a<<endl;
    }
}
