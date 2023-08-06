#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        string m;
        cin>>s;
        m=s;
        reverse(m.begin(),m.end());
        s+=m;

        cout<<s<<endl;
    }
}
