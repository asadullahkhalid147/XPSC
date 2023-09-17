#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        for(int i=1; i<=t; i++)cin>>arr[i];
        sort(arr+1,arr+t+1);
        if(t&1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int flag=1;
        for(int i=2; i<=t/2; i++)
        {
            if(arr[i]==arr[i+t/2-1])flag=0;
        }

        if(flag==0)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=t/2; i++)
            {
                cout<<arr[i]<<" "<<arr[i+t/2]<<" ";
            }
            cout<<endl;
        }

    }
}
