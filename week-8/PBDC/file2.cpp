#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    pbds<int>s;
    s.insert(2);
    s.insert(4);
    s.insert(9);
    s.insert(2);
    s.insert(7);
    s.insert(1);
    s.insert(7);


    for(auto val: s)
        cout<<val<<" ";
    cout<<endl;

    cout<< s.order_of_key(7)<<endl;/// time complexity: log(n);
}

