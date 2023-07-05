#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,x;
    cin>>n>>k>>x;
    int m=k;
    int nod;
    int baki;
    int l;
    int flag=0;
    for(int i=1; i<=m; i++)
    {


        nod = n%k;
        baki = n/k;
        l=k;
//        cout<<nod<<" "<<baki<<endl;
        if(nod!=x && baki!=x) break;
        else if(nod==x || baki==x)
        {
            nod=0;
            baki=0;
            l=0;
            k--;
            if(k==0)
            {
                cout<<"NO"<<endl;
                break;
            }
        }



    }
    vector<int>vec;
    if(baki==0 && nod<=k)
    {
            vec.push_back(nod);
            flag=1;
    }
    else if(nod ==0 && baki<=k)
    {
        for(int i=1;i<=l;i++)
            vec.push_back(baki);
        flag=1;
    }
    else
    {
        if(baki<=k  && nod<=k)
        {
            for(int i=1; i<=l; i++)
            {
                vec.push_back(baki);
            }
            vec.push_back(nod);
            flag=1;
        }
        else
        {
            if(baki>k || nod>k)
            {
                flag=0;
            }
        }
    }
    if( flag==1)
    {
        cout<<"YES"<<endl;
        cout<<vec.size()<<endl;
        for(auto it:vec)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    else if(flag==0) cout<<"NO"<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
