#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n;cin>>n;
        int a[300];
        memset(a,0,sizeof a);

        for(auto i:s)
        {
            a[i]++;
            n-=(i-'a'+1);
        }

        for(int i='z';i>='a';i--)
        {
            while(a[i]!=0 && n<0)
            {
                n+=i-'a'+1;
                a[i]--;
            }
        }
        for(auto i:s)
        {
            if(a[i]!=0)
                {
                    a[i]--;
                    cout<<i;
                }
        }
        cout<<endl;
    }
}
