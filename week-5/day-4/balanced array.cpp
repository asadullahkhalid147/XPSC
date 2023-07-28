#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int num=1;
        int n;cin>>n;
        if((n/2)%2!=0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++)
            {
                cout<<i*2<<" ";
            }
            int m=(n/2)-1;

            while(m--)
            {
                cout<<num<<" ";
                num+=2;
            }
            cout<<num+(n/2)<<endl;
        }
    }
}
