#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n);

        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());

        if(a.back()==a[0])cout<<-1<<endl;
        else
        {
            int j=0;
            while(a[j]==a[0])
            {
                j++;
            }
            cout<<j<<" "<<n-j<<endl;
            for(int i=0;i<j;i++)cout<<a[i]<<" ";
            cout<<endl;
            for(int i=j;i<n;i++)cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}
