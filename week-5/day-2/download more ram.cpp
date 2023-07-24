#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        map<int,multiset<int>>mp;
        vector<int>a(n);
        for(auto & it:a)
            cin>>it;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[a[i]].insert(x);
        }

//       for(const auto & [key,values]: mp)
//        {
//            cout<<key<<":";
//            for(const auto& value:values)
//            {
//                cout<<value<<" ";
//            }
//            cout<<endl;
//        }
        for(const auto& [key,values]:mp)
        {
            if(key<=k)
            {
                for(const auto &value:values)
                {
                    k+=value;
                }
            }
        }
        cout<<k<<endl;
    }
}
