#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        string s;cin>>s;
        auto ch = min_element(s.begin(),s.end());
        cout<<*ch<<" ";
        s.erase(ch);
        cout<<s<<endl;
    }
}
