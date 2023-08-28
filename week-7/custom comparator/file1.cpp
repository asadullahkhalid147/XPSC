#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>x,pair<int,int>y)
{
    if(x.first==y.first)
    {
        return x.second>y.second; /// duita pair er first value jodi same hoy tobe second value jetar boro sheta upore jabe. orthat second value ke descending a sort korsi jodi first value same hoy
    }
    return x.first<y.first;
}

int main()
{
    int n;cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end(),cmp);
    for(auto [x,y] : a)
    {
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
