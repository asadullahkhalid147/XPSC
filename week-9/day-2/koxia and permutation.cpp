#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int i=n,j=1;

        while(i>=j)
        {
            cout<<i<<" ";
            i--;

            if(i>=j)
            {
                cout<<j<<" ";
                j++;
            }
        }
        cout<<endl;
    }
}
