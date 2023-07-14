#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        int flag=1,cnt=0;
        for(int i=0;i<n;i++) cnt=max(a[i]-b[i],cnt);
        for(int i=0;i<n;i++)
        {
            if(a[i]-b[i]<cnt && b[i]!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag!=0 && cnt>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
