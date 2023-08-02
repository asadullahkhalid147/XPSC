#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int i=0,j=0,f=1,cnt=0;
        vector<char>vec;
        while(j<s.size())
        {
            if(s[j]=='R' || s[j]=='B')
            {
                vec.push_back(s[j]);
            }

            char r='R';
            char b='B';
            if(s[j]=='W')
            {
                if(cnt%2!=0)
                {
                    auto it = find(vec.begin(),vec.end(),r);
                    auto  t = find(vec.begin(),vec.end(),b);
                    if(it==vec.end() && t==vec.end())
                    {
                        f=0;
                        break;
                    }
                }
                cnt=0;
            }
            j++;
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
