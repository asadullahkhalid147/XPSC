#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int one=0,two=0,ans=0;
        int n;cin>>n;
        while(n--)
        {
            int x;cin>>x;
            if(x%3==1) one++;
            else if(x%3==2) two++;
            else if(x%3==0) ans++;
        }

        cout<<ans+min(one,two)+(abs(one-two))/3<<endl;

    }
}
