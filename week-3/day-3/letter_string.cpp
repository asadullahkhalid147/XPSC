#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<string>s(n);
        map<char,ll>first;
        map<char,ll>second;
        map<string,ll>str;

        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            first[s[i][0]]++;
            second[s[i][1]]++;
            str[s[i]]++;
        }

        ll ans=0,x=0;
        for(int i=0;i<n;i++)
        {
            x=abs(first[s[i][0]]-str[s[i]]);
            ans+=x;
            x=abs(second[s[i][1]]-str[s[i]]);
            ans+=x;

            if(first[s[i][0]]>0) first[s[i][0]]--;
            if(second[s[i][1]]>0) second[s[i][1]]--;
            if(str[s[i]]>0) str[s[i]]--;
        }
        cout<<ans<<endl;
    }
}
