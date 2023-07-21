#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int f=0;
        int a[2];
        for(int i=0; i<2; i++) cin>>a[i];

        if(a[0]+a[1]>=10)
        {
            f=1;
        }
        else if(a[1]+a[2]>=10)
        {
            f=1;
        }
        else if(a[2]+a[0]>=10)
        {
            f=1;
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
