#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;

        cin>>n>>x;
        int r=x;

        int prv=-2;
        int aft;
        int ans=1;
        n--;
        while(n--)
        {
           cin>>x;
            if(x>r)
            {
                aft=1;
            }
            else if(x<r)
            {
                aft=-1;
            }
            else continue;
            if(prv!=aft)ans++;
            prv=aft;r=x;
        }
        cout<<ans<<endl;
    }
}
