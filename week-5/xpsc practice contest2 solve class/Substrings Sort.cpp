#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<string>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end(),[&](string x, string y){
         return x.size()<y.size();
         });
    bool ok=true;

    for(int i=0;i<n-1;i++)
    {
        string s=a[i+1];
        int pos = s.find(a[i]);
        if(pos==-1)
        {
            ok=false;
            break;
        }
    }
    if(ok)
    {
        cout<<"YES"<<endl;
        for(auto value:a)
        {
            cout<<value<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
