#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
//        set<int>s;
        int n;cin>>n;
        int k=n*(n-1);
        vector<int>s;
        while(k--)
        {
//            vector<int>a(n);
//            for(int i=0;i<k-1;i++)cin>>a[i];
//
//            for(int i=0;i<k-1;i++)
//            {
//                auto it = s.find(a[i]);
//                if(it==s.end())
//                {
//                    s.insert(a[i]);
//                }
//
//            }

            int num;cin>>num;
            auto it =find(s.begin(),s.end(),num);
            if(it==s.end())s.push_back(num);

        }
        for(auto it:s)cout<<it<<" ";
        cout<<endl;

    }
}
