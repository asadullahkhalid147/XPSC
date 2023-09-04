#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n+1,0);

        for(int i=1;i<=n;i++)cin>>a[i];
        int cnt=0,knt=0;

        for(int i=1;i<=n;i++)
        {

            if(a[i]==i)knt++;
        }
        if(knt&1)knt=(knt/2)+1;
        else knt=knt/2;

//        cout<<"++"<<cnt<<" "<<knt<<" ";
        cout<<cnt+knt<<endl;
    }
}
