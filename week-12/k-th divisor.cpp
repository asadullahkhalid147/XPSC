#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>vec;
    set<long long>st;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i!=i)
            {
                st.insert(i);
                st.insert(n/i);
            }
            else st.insert(i);
        }
    }
    for(auto it:st)
    {
        vec.push_back(it);
    }
    int flag=1;
    long long ans=0;
    for(long long i=0; i<vec.size(); i++)
    {
        if(i==k-1)
        {
            ans=vec[i];
            flag=1;
            break;
        }
        else flag=0;
    }
    if(flag==0)cout<<-1<<endl;
    else cout<<ans<<endl;
}
