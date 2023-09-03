#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s="314159265358979323846264338327";
        string t;cin>>t;
        int n=t.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==t[i])cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
}
