#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    pbds<pair<int,int>>s;
    s.insert({2,1});
    s.insert({2,2});
    s.insert({4,1});
    s.insert({9,1});
    s.insert({2,3});
    s.insert({7,1});
    s.insert({1,1});
    s.insert({7,2});

    for(auto val: s)
        cout<<val.first<<" ";
    cout<<endl;

//    cout<< *s.find_by_order(3)<<endl;/// time complexity: log(n);
}

