#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int flag=1;
    while(n--)
    {
        int x;cin>>x;
        if(x==1) flag=0;
    }
    if(flag==0)cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}
