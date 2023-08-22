#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        string t = s;

        if(is_sorted(s.begin(),s.end()))
        {
            cout<<0<<endl;
            continue;
        }

        sort(t.begin(),t.end());
        vector<int>vec;
        cout<<1<<endl;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                vec.push_back(i+1);
            }
        }
        cout<<vec.size()<<" ";
        for(auto it:vec)
        {
            cout<<it<<" ";
        }
        cout<<endl;


    }
}
