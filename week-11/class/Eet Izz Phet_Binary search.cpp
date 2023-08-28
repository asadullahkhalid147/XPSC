#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int>a, vector<int>b)
{
    for(int i=0;i<26;i++)
    {
        if(a[i]==b[i]) continue;
        return a[i]<b[i];
    }
}
int main()
{
    int n;cin>>n;
    vector<vector<int>>v(n,vector<int>(26,0));

    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        for(char c:s)
        {
            v[i][c-'a']++; /// vector er ith index a c character er count barassi
        }
    }

    sort(v.begin(),v.end(),cmp);

//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<26;j++)
//        {
//            cout<<v[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    int q;cin>>q;
    while(q--)
    {
        string s;cin>>s;
        int cnt[26]={0};
        for(char c:s)
        {
            cnt[c-'a']++;
        }
        int lo=0,hi=n-1;
        bool flag=true;
        for(int i=0;i<26;i++)
        {
            int amar_count=cnt[i];
            int l=lo,r=hi;
            int ans=-1;
            while(l<=r)/// most leftest ans check korsi
            {
                int mid = (l+r)>>1;
                if(v[mid][i]==amar_count)
                {
                    ans=mid;
                    r=mid-1;
                }
                else if(v[mid][i]>amar_count)
                {
                    r = mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
//            cout<<ans<<endl;
            if(ans==-1)
            {
                flag=false;
                break;
            }
            lo=ans;/// ans holo most leftest
            l=lo,r=hi;
            int ans2=-1;
            while(l<=r)/// most rightest ans check korsi
            {
                int mid = (l+r)>>1;
                if(v[mid][i]==amar_count)
                {
                    ans2=mid;
                    l=mid+1;
                }
                else if(v[mid][i]>amar_count)
                {
                    r = mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
//            cout<<ans2<<endl;
            hi=ans2;///ans2 holo  most rightest
        }
        if(flag)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
