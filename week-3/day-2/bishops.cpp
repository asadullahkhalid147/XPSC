#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char matrix[8][8];

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>matrix[i][j];
            }
        }
        int ans=0,res=0,flag=0;
        cout<<endl;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(matrix[i][j]=='#' && matrix[i][j+1]=='.' && matrix[i][j+2]=='#' && i!=6)
                {
                    ans = i+2;
                    res=j+2;
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;

        }
        cout<<ans<<" "<<res<<endl;
    }
}
