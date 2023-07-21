#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<long long int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int sum1=0,sum2=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++) sum1+=a[i];

        for(int i=2;i<n;i++) sum2+=a[i];



        if(sum1>=sum2) cout<<sum1<<endl;
        else cout<<sum2<<endl;


    }
}
