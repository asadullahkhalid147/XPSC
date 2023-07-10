#include<bits/stdc++.h>
using namespace std;
char make_ch(int i)
{
    return 'a'+i-1;
}
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    string c;
    int i=n-1;
    while(i>=0)
    {
        if(s[i]!='0')
        {
            c+=make_ch(s[i]-'0');
            i--;
        }
        else
        {
            c+=make_ch(stoi(s.substr(i-2,2)));
            i-=3;
        }
    }
    reverse(c.begin(),c.end());
    cout<<c<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
