#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mx=b-c;
        int km=0;

        b=b-mx;
        a--;




//        cout<<b<<" "<<a<<endl;
        while(a!=0)
        {
            if(a==1)
            {
                cout<<b<<" ";
                break;
            }
             km=b/a;
            a--;
            b-=km;
//            cout<<a<<endl;
            cout<<km<<" ";
        }
        cout<<mx<<endl;
    }
}
