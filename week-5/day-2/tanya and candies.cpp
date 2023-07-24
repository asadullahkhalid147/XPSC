#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int e=0,o=0,pe=0,po=0,cnt=0;
    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0)
        {
            e+=a[i];
        }
        else
        {
            o+=a[i];
        }
    }



    for(int i=0;i<n;i++)
    {
        if(i%2==0) e-=a[i];
        else o-=a[i];

        if(e+po==o+pe) cnt++;

        if(i%2==0) pe+=a[i];
        else po+=a[i];
    }
    cout<<cnt<<endl;

}
