#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        ll i=0,j=0,ans=0,close=0;

        while(i<n)
        {
            if(s[i]==':')
            {
                j=i+1;
                while(j<n)
                {
                    if(s[j]==')') close++;
                    if(s[j]=='('|| s[j]==':')
                    {
                        if(s[j]==':' && close>=1) ans++;
                        close=0;
                        break;
                    }
                    j++;
                }
                i=j;
            }
            else
            {
                i++;
            }
        }
        cout<<ans<<endl;
    }
}
