#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,s;cin>>x>>s;
    int a[10000];
    cin>>n>>s;
    while(i<=n)
    {
        cin>>a[i];
        m=max(m,a[i]);
        s+=a[i];
        i++;
    }
//    s*=2;
//    p=sqrt(s);
//    while(p>=1&&p*(p+1)>s)
//        p--;
//    if(p*(p+1)==s&&m<=p)
//        cout<<"YES"<<endl;
//    else
//        cout<<"NO"<<endl;
//}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
