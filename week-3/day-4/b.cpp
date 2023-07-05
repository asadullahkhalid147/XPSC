#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }
    int flag=0;
    for(int i=0; i<4; i++)
    {

        if((a[0][0]<a[0][1]) && (a[1][0]<a[1][1]) && (a[0][0]<a[1][0]) && (a[0][1] < a[1][1]))
        {
            flag=1;
            break;

        }
        else
        {
            int k=a[0][1];
            a[0][1]=a[0][0];
            int l = a[1][1];
            a[1][1]=k;
            int z = a[1][0];
            a[1][0]=l;
            a[0][0]=z;
        }
    }





    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
