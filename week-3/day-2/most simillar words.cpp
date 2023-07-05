#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,l;cin>>n>>l;
        vector<string>st(n);

        for(int i=0;i<n;i++)
        {
            cin>>st[i];
        }
        int k=0;
        int  ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int num=0;k=0;
                string first = st[i];
                string second = st[j];

                while(k<first.size())
                {
                     num+=abs(first[k]-second[k]);k++;
                }
                ans=min(ans,num);
            }
        }
        cout<<ans<<endl;
    }
}
