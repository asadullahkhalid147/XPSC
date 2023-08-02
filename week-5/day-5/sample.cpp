#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0,f=0,cnt=0;
        int q=n;
        int m=1;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];

        for(auto i:a) sum+=i;
        cout<<sum<<endl;
        for(int i=0; i<n; i++)
        {
            m++;
            cnt+=a[i];
            sum-=a[i];
            q--;
            cout<<cnt<<"---"<<sum<<endl;

            if(cnt==sum)
            {
                f=1;
                break;
            }
        }
        if(f==1) cout<<m+q<<endl;
        else cout<<0<<endl;

    }
}
