#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

        int num;
        vector<string>s(t);
        for(int i=0;i<t;i++)
        {
            cin>>s[i];
        }
        string v="3141592653589793238462643383279";

        for(int i=0;i<t;i++)
        {
            for(int j=0;j<=30;j++)
            {
                if(s[i][j]!=v[j])
                {
                    num=j;break;
                }
            }
            cout<<num<<endl;
        }

}
