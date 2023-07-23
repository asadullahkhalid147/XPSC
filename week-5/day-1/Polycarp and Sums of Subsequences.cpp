#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a[7];
        long long num1,num2,num3;
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
            if(i==0) num1=a[i];
            if(i==1) num2=a[i];
            if(i==6) num3=a[i];
        }
        long long ans = num3-(num1+num2);
        cout<<ans<<" "<<num1<<" "<<num2<<endl;

    }
}
