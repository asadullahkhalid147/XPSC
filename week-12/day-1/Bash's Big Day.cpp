#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)return a;
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int n;cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=a[0];
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        ans=gcd(ans,a[i]);
        cnt++;
        if(ans==1)break;
    }
    cout<<cnt<<endl;
}
