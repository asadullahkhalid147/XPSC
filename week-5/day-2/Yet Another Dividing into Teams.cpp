#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(auto &it:a) cin>>it;

        int flag=1;
        sort(begin(a),end(a));
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1]+1)
            {
                flag=2;
                break;
            }
        }
        cout<<flag<<endl;
    }
}
