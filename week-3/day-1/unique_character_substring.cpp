#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i=0,j=0,ans=-1,unq=0;
    int n,k;cin>>k;
    int frq[26]= {0};
    n=s.size();

    while(j<n)
    {
        char c= s[j];
        if(frq[c-'a']==0) unq++; /// character er frequency jodi 0 hoe tobe unq++ koresi
        frq[c-'a']++;

        if(unq>k)
        {
            while(unq>k) /// jotokhon unq>k totokon loop chalabo unq==k korar jonno
            {
                char leftC = s[i];/// leftC holo left side er character
                frq[leftC-'a']--;
                if(frq[leftC-'a']==0) unq--;
                i++;
            }
        }
        if(unq==k)
        {
            ans = max(ans,j-i+1);
        }

        j++;
    }
    cout<<ans<<endl;
}
