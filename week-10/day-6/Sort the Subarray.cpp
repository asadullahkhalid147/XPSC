#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];


        int diff=-1,flag=-1;

        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                diff=i;
                if(flag==-1)
                {
                    flag=i;
                }
            }
        }

        while(flag>0 && b[flag-1]<=b[flag])
        {
            flag--;
        }

        while(diff<n-1 && b[diff+1]>=b[diff])
        {
            diff++;
        }

        cout<<flag+1<<" "<<diff+1<<endl;
    }
}
