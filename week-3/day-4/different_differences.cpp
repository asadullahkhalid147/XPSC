#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    int num=1;


    cout<<num<<" ";
    int m=n-1;
    int l=n-2;
    int i=0;
    while(m>0)
    {
        num+=i+1;
        int rrr=0;

        if(k-num>=l)
        {
            cout<<num<<" ";
            l--;
            i++;
            m--;
        }
        else if(k-num<l)
        {
            rrr=i+1;
            while(k-num<l)
            {
                num--;
            }
            num=num-rrr;
        }

    }
}


int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
