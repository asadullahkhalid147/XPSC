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
        int q=n;
        int ev=0,od=0;
        while(n--)
        {

            int x;
            cin>>x;

            if(x%2==0)ev++;
            else od++;

        }
        if(od==q) cout<<"YES"<<endl;
        else if(ev==q)cout<<"YES"<<endl;
        else if(od%2==0)cout<<"YES"<<endl;
        else if(od%2!=0)cout<<"NO"<<endl;
    }
}
