#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==0 && a[i-1]==1 && a[i+1]==1)
        {
            a[i+1]=0;
            k++;
            i++;
        }
    }
    cout<<k<<endl;
}
