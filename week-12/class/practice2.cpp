#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int num=1;
        int k=r;
        while(r--)
        {
            while(__gcd(r,num)!=1 )
            {
                 num++;
                cout<<r<<" "<<num<<endl;
                break;
            }
        }
    }
}
