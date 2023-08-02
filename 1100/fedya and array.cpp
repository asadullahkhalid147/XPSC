#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;

        int n=2*(a-b);

        vector<long long>arr(n);
        int ptr=0;

        for(long long i=b;i<=a;i++)
        {
            arr[ptr++]=i;
        }

        for(long long i=a-1;i>b;i--)
        {
            arr[ptr++]=i;
        }

        for(long long i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

