#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int i=0,j=0;
    long long sum=0;
    int ans=0;

    while(j<n)
    {
        sum+=a[j];/// value add korte thakbo
        if(sum>k)
        {
            while(sum>k)/// ei loop ta highest ekbari ghurbe
            {
                sum-=a[i]; /// boro hole left side er gulo bad dibo
                i++;
            }
        }

        if(sum==k)
        {
            ans=max(ans,j-i+1); /// shoman hole ans collect korbo
        }
        j++;/// right side a move korte thakbo
    }
    cout<<ans<<endl;
}
