#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 ll cs =1;
 vector<ll>v;

 void solve()
 {
     ll n;cin>>n;
     ll a[n];
//     unordered_map<ll,ll>freq;
    ll freq[35000]={0};

     for(ll i=0;i<n;i++)
     {
         cin>>a[i];
         freq[a[i]]++;
     }


     ll ans=0;
     for(ll i=0;i<n;i++)
     {
         for(ll j=0;j<v.size();j++)
         {
             ll k=a[i]^v[j];

             if(k>(1<<15))
             {
                 continue;
             }
             ans+=freq[k];
         }
     }
     cout<<(ans+n)/2<<endl;

 }

 /// string ke integer a convert korsi
// string converter(ll val)
// {
//     string ans="";
//     while(val)
//     {
//         ll digit = val%10;
//         ans+=(digit+'0');
//         val/=10;
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }

 bool is_palindrome(ll val)
 {
    string ans = to_string(val);
    string ans2 = ans;
    reverse(ans2.begin(),ans2.end());

    return ans==ans2;
 }
int main()
{
    for(ll i=0;i<(1<<15);i++)
    {
        if(is_palindrome(i))
           {
               v.push_back(i);
           }
    }

//    for(ll val: v)
//        cout<<val<<" ";
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
