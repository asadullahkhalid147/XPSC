#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,x;cin>>n>>k>>x;

        int first = n%2;
        int sec=k%2;
        int trd = x%2;

        int res = abs((trd*3)-((sec*2)+first));
        if(res%2!=0)cout<<1<<endl;
        else cout<<0<<endl;
    }
}
