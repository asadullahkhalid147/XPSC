#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,x;cin>>n>>k>>x;

        if((x==1)&&((n==1)||(k==1)||(k==2&&n%2!=0))) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(x!=1)
            {
                cout<<n<<endl;
                while(n--)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<n/2<<endl;
                while(n>3)
                {
                    cout<<2<<" ";
                    n-=2;
                }
                cout<<n<<" ";
            }
        }
    }
}
