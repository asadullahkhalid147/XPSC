#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n;
  for(cin>>t;cin>>n;){
    int A[n],i;
    for(int i=0;i<n;++i) cin>>A[i];
    unordered_set<int> s;
    for(i=n-1;i>=0;--i)
      if(!s.insert(A[i]).second) break;
    cout<<i+1<<endl;
  }
}
