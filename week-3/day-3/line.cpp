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
        long long current=0;
        vector<long long>appro;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                current+=i;
                appro.push_back((n-i-1)-i);
            }
            else
            {
                current+=n-i-1;
                appro.push_back(i-(n-i-1));
            }
        }
        sort(appro.begin(),appro.end(),greater<int>());

        for(int i=0; i<n; i++)
        {
            if(appro[i]>0)
            {
                current+=appro[i];
            }
            cout<<current<<" ";
        }
        cout<<endl;
    }
}
