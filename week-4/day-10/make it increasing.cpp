#include<bits/stdc++.h>
using namespace std;

void solve()
{




        int n;cin>>n;
        vector<int>a(n);
        int cnt=0;
        for(auto &i:a) cin>>i;

        for(int i=n-2;i>=0;i--)
        {
            while(a[i]>=a[i+1] && a[i]>0)
            {
                a[i]/=2;
                cnt++;
            }
            if(a[i]==a[i+1])
            {
                cout<<-1<<endl;
                return;
            }
        }
        cout<<cnt<<endl;

}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}
