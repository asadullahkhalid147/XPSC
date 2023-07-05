#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        map<string,bool>mp;

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            mp[s[i]] = true;
        }

        for(int i=0; i<n; i++)
        {
            bool ok = false;
            for(int j=1; j<s[i].length(); j++)
            {
                string preff = s[i].substr(0,j), suff=s[i].substr(j,s[i].length()-j);

                if(mp[preff] && mp[suff])
                {
                    ok = true;
                }
            }
            cout<<ok;
        }
        cout<<endl;


    }
}
