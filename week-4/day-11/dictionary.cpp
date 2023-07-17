#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt,mnt;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char m,n;
        cin>>m>>n;
        cout<<25*(m-'a')+(n-'a')+(m>n)<<endl;

    }
}
