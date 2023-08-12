#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0,cnt=0;
        int n;
        cin>>n;
        map<long ,long>mp;
        vector<long>vec(n);
        vector<long>a;
        vector<long>b;

        for(int i=0; i<n; i++)
        {
            cin>>vec[i];
            mp[vec[i]]++;
        }
        sort(vec.begin(),vec.end());
        int mx=vec[n-1];
//        cout<<mx;

        for(int i=0;i<n;i++)
        {
            if(vec[i]==mx)cnt++;
        }
//        cout<<cnt<<endl;




        for(int i=0; i<n; i++)
        {
            if(cnt==n)
            {
                flag=1;
                break;
            }
//            cout<<"H";
            for(int j=1; j<=vec[i]; j++)
            {

                if(vec[i]%j==0)
                {

                    auto it = find(vec.begin(),vec.end(),j);
//                    cout<<*it<<" ";

                    if(it!=vec.end() && mp[*it] )
                    {
                        if(*it!=mx)
                        {
                            a.push_back(*it);
                            mp[*it]--;
                        }
                        else
                        {
                            b.push_back(*it);
                        }
                    }
//                    else
//                    {
//                        b.push_back(*it);
//                        mp[*it]--;
//                    }
                }
            }
        }
//        for(auto i:a)cout<<i<<" ";
//        cout<<endl;
//        for(auto i:b)cout<<i<<" ";

//        cout<<"H";
        int l=min(a.size(),b.size());
//        cout<<l<<endl;
        for(int i=0;i<l;i++)
        {
            if(cnt==n) break;
            if(a[i]%b[i]==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            cout<<a.size()<<" "<<b.size()<<endl;
           for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
           cout<<endl;
           for(int i=0;i<b.size();i++)cout<<b[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;



    }
}
