#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        int q=n;
        while(q--)
        {
            int x;
            cin>>x;
            sum+=x;
        }


        if(sum<=0)cout<<1<<endl;
        else if(sum>0)
        {
            if(sum==n)cout<<0<<endl;
            else if(sum<n)cout<<1<<endl;
            else if(sum>n)
            {
                cout<<sum-n<<endl;
            }
        }
    }
}
