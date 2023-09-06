/// divisor complexity O(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {

            if(n%i!=i)
                cout<<i<<" "<<(n/i)<<" ";
            else cout<<i<<" ";
        }

    }
}
