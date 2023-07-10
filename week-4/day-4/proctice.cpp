#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        int k;cin>>k;
        s=s+to_string(k);

    }
    string v="101";
//    cout<<s<<endl;
    int j=0,m=-1,cnt=0;
//    string s1=s.substr(0,3);
//    cout<<s1<<" ";
    for(int i=0;i<s.size();i++)
    {
        string s1=s.substr(i,3);
//        cout<<s1<<" ";
        string s2 = v.substr(0,3);
        j=i;
        if(s1==s2)
        {
           cnt++;
//            if(i-j<3) m++;
//            j=i;
        }


    }
    cout<<cnt;

}
