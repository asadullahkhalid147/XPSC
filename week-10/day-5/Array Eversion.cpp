#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+1];
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int x=a[n];

        for(int i=n-1;i>=1;i--)
        {
            if(a[i]>x)
            {
                x=a[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
}
