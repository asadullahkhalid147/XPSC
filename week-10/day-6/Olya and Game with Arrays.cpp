#include<bits/stdc++.h>
using namespace std;
long long arr[50005];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long ans=0;
        long long fir=1e9+1;
        long long sec = 1e9 +1;
        int n;
        cin>>n;
        while(n--)
        {
            long long  k;
            cin>>k;

            for(long long i=1; i<=k; i++)cin>>arr[i];
            sort(arr+1,arr+k+1);

            fir = min(fir,arr[1]);
            sec=min(sec,arr[2]);


            ans+=arr[2];
        }
        cout<<ans+fir-sec<<endl;
    }
}
