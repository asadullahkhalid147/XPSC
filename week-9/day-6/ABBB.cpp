#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char>st;
        int j=0;
        while(j<s.size())
        {
            if(st.size()==0)
            {
                st.push(s[j]);
            }
            else
            {
                if(s[j]=='B')
                {
                    if(st.top()=='A')
                    {
                        st.pop();
                    }
                    else if(st.top()=='B')
                    {
                        st.pop();
                    }
                }
                else
                {
                    st.push(s[j]);
                }
            }
            j++;
        }
        cout<<st.size()<<endl;
    }
}
