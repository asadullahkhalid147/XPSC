#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int t;cin>>t;
        int num=t/3;
        int dedo=t%3;
        int first=num+1;
        int sec=num;
        int thi = num-1;
        if(dedo==0)
        {
            cout<<sec<<" "<<first<<" "<<thi<<endl;
        }
        else if(dedo==1)
        {
            cout<<sec<<" "<<first+1<<" "<<thi<<endl;
        }
        else if(dedo==2)
        {
            cout<<sec+1<<" "<<first+1<<" "<<thi<<endl;
        }
    }
}
