#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;int n,k;cin>>k;n=s.size();int i=0,j=0,ans=-1,unq=0;int frq[26]={0};

    while(j<n)
    {
        char c=s[j];if(frq[c-'a']==0)unq++;frq[c-'a']++;
        if(unq>k)
        {
            while(unq>k)
            {
                char leftC=s[i];frq[leftC-'a']--;if(frq[leftC-'a']==0)unq--;i++;
            }
        }
        if(unq==k)ans=max(ans,j-i+1);
        j++;
    }
    cout<<ans<<endl;
}
