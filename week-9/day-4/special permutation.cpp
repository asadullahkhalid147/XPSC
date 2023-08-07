#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n,a,b;cin>>n>>a>>b;

        if((a<=n/2 && b>=n/2+1) || (a==n/2+1 && b==n/2))
        {
            cout<<a<<" ";
            for(int i=n;i>0;i--)
            {
                if(i!=a && i!=b)
                {
                    cout<<i<<" ";
                }
            }
            cout<<b<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
