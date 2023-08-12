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
        string s;
        cin>>s;
//        cout<<s<<endl;

        int t=0,m=0,r=0,i=0,u=0,k=0;

        for(int j=0; j<n; j++)
        {
            char c=s[j];

            if(c=='T')t++;
            else if(c=='i')i++;
            else if(c=='m')m++;
            else if(c=='u')u++;
            else if(c=='r')r++;
            else k++;
        }
//        cout<<t<<" "<<i<<" "<<r<<" "<<m<<" "<<u<<endl;
        if(t==1 && i==1 && r==1 && m==1 && u==1 && k==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
}
