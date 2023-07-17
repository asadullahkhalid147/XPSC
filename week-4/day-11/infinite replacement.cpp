#include<bits/stdc++.h>
using namespace std;
/// permutation er math
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        long long int pi=pow(2,s.size());

        if(t.size()==1 && t[0]=='a') cout<<1<<endl;
        else if(t.find('a')!=-1) cout<<-1<<endl;
        else cout<<pi<<endl;
    }
}
