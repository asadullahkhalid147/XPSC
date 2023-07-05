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
        string s;

        cin>>s;

        for(auto& c:s)
        {
            c=tolower(c);
        }
        s.erase (unique(s.begin(),s.end()), s.end());
//   s.erase(unique(s.begin(), s.end()), s.end());

        if(s=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
