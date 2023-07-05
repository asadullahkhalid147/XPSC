#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long a[n];
        long long cnt=0,okt=0,mnt=0,rnr=0;
        for(long long k=0;k<n;k++)
        {
            cin>>a[k];
        }
//        for(long long i=0;i<n;i++)
//        {
//            if(a[i]<0)cnt++;
//        }
        long long i=1,j=0,sum=0, m=0;
        while(m<n)
        {
            if(a[m]<0)okt++;
            if(a[m]<0)sum+=(a[m]*(-1));
            else sum+=a[m];
            m++;
        }
        while(i<n)
        {
            if(a[j]==0 && a[j-1]<0 && a[j+1]<0)mnt++;
            else if(a[j]==0 && a[j-1]<0 && a[j+1]==0)rnr++;
            else if(a[j]==0 && a[j-1]==0&&a[j+1]==0)continue;
            else if(a[j]==0 && a[j-1]==0 && a[j+1]<0)rnr++;

            if(a[j]<0 && a[i]<0)mnt++;

            mnt = mnt +(rnr/2);
            i++;j++;
        }
//        cout<<okt<<" "<<mnt;

        int ans=okt-mnt;
        if(ans<0) ans = ans*(-1);
        cout<<sum<<" "<<ans<<endl;
    }
}
