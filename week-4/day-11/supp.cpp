#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt=0;


        for(long long int i=0; i<s.size(); i++)
        {
            if(s.size()==1)
            {
                break;
            }
            if(i==s.size()-1) break;
            if(s[i]!=s[i+1])
            {
                cnt++;
                i+=1;
            }

        }
        if(cnt%2!=0) cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
}
