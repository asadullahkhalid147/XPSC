#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int one=0,two=0;
        multiset<int>a;
        int q=n;
        while(n--)
        {
            int x;cin>>x;
            if(x==1) one++;
            else two++;
        }

        if((one%2==0 && one!=0) || (one==0 && two%2==0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
