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
        vector<int>m(n);
        for(int i=0; i<n; i++)cin>>m[i];

        vector<int>a;
        vector<int>v;

        for(int i=0; i<n; i++)
        {
            for(int i=n-1; i>=0; i--)
            {
                if(i%2==0)
                {
                    a.push_back(m[i]);
                }
                else
                {
                    v.push_back(m[i]);
                }
            }
        }

        for(int i=0; i<a.size(); i++)cout<<a[i]<<" ";
        for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";

    }
}
