#include <bits/stdc++.h>
using namespace std;
string a,b;
int t,x,y,k[130];
int main() {
    cin>>t;
    k['S']=-1;
    k['L']=1;
    while (t--) {
        cin>>a>>b;
        x=a.size();
        y=b.size();
        x*=k[a[x-1]];
        y*=k[b[y-1]];
        cout<<(x<y?"<\n":(x==y?"=\n":">\n"));
    }
}
