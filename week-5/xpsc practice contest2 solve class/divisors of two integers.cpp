#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mx=a[n-1];

    map<int,int>divisors;
    for(int i=1;i*i<=mx;i++)
    {
        if(mx%i==0)
        {
            divisors[i]++;
            {
                if((mx/i)!=i)
                    divisors[mx/i]++;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(divisors[a[i]]>=1)
        {
            divisors[a[i]]--;
            a[i]=0;
        }
    }
    int x,y=0;
    x=mx;
    for(int i=0;i<n;i++)
    {
        y=max(y,a[i]);
    }
    cout<<x<<" "<<y<<endl;
}
