#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<string>s(n);
        string k="vika";
        int a=0;

        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }

        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
                if(s[i][j]==k[a])
                {
                    a++;
                    break;
                }
            }
        }
        if(a==4)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
