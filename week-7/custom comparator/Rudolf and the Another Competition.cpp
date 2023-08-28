#include<bits/stdc++.h>
using  namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<vector<int>>a;

        for(int i=0; i<n; i++)
        {
            vector<int>t;
            for(int j=0; j<m; j++)
            {
                int in;
                cin>>in;
                t.push_back(in);
            }
            sort(t.begin(),t.end());
            a.push_back(t);
        }
        vector<pair<int,pair<int,long long>>>vp;

        for(int i=0; i<n; i++)
        {
            int points = 0,tot=0;
            long long penalty=0;
            vector<long long>p;
            for(int j=0; j<m; j++)
            {
                if(tot+a[i][j]>h)
                    break;
                points++;
                tot+=a[i][j];
                if(j==0)
                {
                    p.push_back(a[i][j]);
                }
                else
                {
                    p.push_back(p.back()+a[i][j]);
                }
            }
            for(auto now:p)
            {
                penalty+=now;
            }
            vp.push_back({i,{points,penalty}});
        }
//    for(auto it:vp)
//    {
//        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
//    }
/// vp.first= index;
/// vp.second.first=points
/// vp.second.second=penalty


        sort(vp.begin(),vp.end(),[&](pair<int,pair<int,long long>>x, pair<int,pair<int,long long>>y)
        {
            if(x.second.first == y.second.first && x.second.second == y.second.second)
            {
                return x.first < y.first;
            }
            else if(x.second.first == y.second.first)
            {
                return x.second.second< y.second.second;
            }
            return x.second.first > y.second.first;
        });

        int rnk;
        for(int i=0; i<n; i++)
        {
            if(vp[i].first==0)
            {
                rnk=i+1;
                break;
            }
        }
        cout<<rnk<<endl;
    }
    return 0;
}
